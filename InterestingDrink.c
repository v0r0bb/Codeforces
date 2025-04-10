#include <stdio.h>
#include <stdlib.h>
int cmp (const void *a, const void *b) {
    return *((int *)a) - *((int *)b);
}

int main(void) {
    int n, q; 
    scanf("%d", &n);
    int *x = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
        scanf("%d", x + i);
    qsort(x, n, sizeof(int), cmp);

    scanf("%d", &q);
    long *m = (long *)malloc(q * sizeof(long));
    for (int i = 0; i < q; i++)
        scanf("%ld", m + i);

    int *ans = (int *)malloc(q * sizeof(int));

    for (int i = 0; i < q; i++) {
        if (m[i] < x[0]) {
            ans[i] = 0;
            continue;
        }
        int l = 0;
        int r = n;
        while ((r - l) > 1) {
            int mid = (r + l) / 2;
            if (m[i] < x[mid])
                r = mid;
            else 
                l = mid;
        }
        ans[i] = l + 1;
    }
    
    for (int i = 0; i < q; i++)
        printf("%d\n", ans[i]);

    free(x);
    free(m);
    free(ans);
    return 0;
}