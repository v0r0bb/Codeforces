#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
typedef struct node {
    int v;
    struct node *next;
} Node;

void dfs_find(int v, Node **g, int n, int t) {
    bool *used = (bool *) calloc(n, sizeof(bool));
    int *stack = (int *)malloc(n * sizeof(int));
    int stack_size = 0;
    stack[stack_size++] = v;
    while (stack_size > 0) {
         int current = stack[--stack_size];
         if (used[current])
            continue;
         used[current] = true;
         Node *pcurrent = g[current];
         while (pcurrent != NULL) {
            if (!used[pcurrent->v])
                stack[stack_size++] = pcurrent->v;
            pcurrent = pcurrent->next;
         }
    }
    if (used[t-1])
        puts("YES");
    else 
        puts("NO");
    free(used);
    free(stack);
}

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);
    Node **g = (Node **)malloc(n * sizeof(Node *));
    for (int i = 0; i < n; i++)
        g[i] = NULL;

    for (int i = 0; i < n - 1; i++) {
        int a;
        scanf("%d", &a);
        Node *pnew = (Node *)malloc(sizeof(Node));
        pnew->v = a + i;
        pnew->next = NULL;
        g[i] = pnew;
    }

    dfs_find(0, g, n, t);

    for (int i = 0; i < n; i++) {
        Node *current = g[i];
        while (current != NULL) {
            Node *temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(g);
    return 0;
}