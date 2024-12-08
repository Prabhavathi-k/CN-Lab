#include <stdio.h>
int a[10][10], n;
int main() {
    int i, j, root;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("Enter connection of %d > %d: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter root node: ");
    scanf("%d", &root);
    printf("Adjacent nodes of root node %d:\n", root);
    for (j = 1; j <= n; j++) {
        if (a[root][j] == 1)
            {
            printf("%d\t", j);
             }
    }
    printf("\n");

    printf("Nodes not connected to root %d:\n", root);
    for (int i = 1; i <= n; i++) {
        if (a[root][i] == 0 && i != root) {
            printf("%d\t", i);
        }
    }
    printf("\n"); return 0;}
