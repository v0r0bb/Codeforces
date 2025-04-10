#include <stdio.h>
#include <stdlib.h>
#define R 4e10
#define MIN(x, y) ((x) > (y)) ? (y) : (x)

int main(void) {
    int t;
    scanf("%d", &t);

    long long *ans = (long long *)malloc(t * sizeof(long long));

    for (int p = 0; p < t; p++) {
        long h, n;
        scanf("%ld %ld", &h, &n);
        
        long *a = (long *)malloc(n * sizeof(long));
        long *c = (long *)malloc(n * sizeof(long));

        for (int i = 0; i < n; i++)
            scanf("%ld", a + i);
        for (int i = 0; i < n; i++)
            scanf("%ld", c + i);
        
        long long l = 0;
        long long r = R;

        while ((r - l) > 1) {
            long long mid = (l + r) / 2;
            long long sum = 0;

            for (int i = 0; i < n; i++) 
                sum = MIN(h, sum + ((mid + c[i] -1) / c[i]) * a[i]);
            if (sum == h)
                r = mid;
            else 
                l = mid;
        }

        ans[p] = r;
        free(a);
        free(c);
    }
    
    for (int i = 0; i < t; i++) 
        printf("%lld\n", ans[i]);
    free(ans);
    return 0;
}