#include <stdio.h>

#define N 5

int keys[N] = {10, 20, 30, 40, 50};
int freq[N] = {34, 23, 50, 10, 60};
int cost[N][N], root[N][N];

int sum(int i, int j) {
    int s = 0;
    int k;
    for ( k = i; k <= j; k++) s += freq[k];
    return s;
}

void constructOBST() 
{ int L,r,i;
    for ( L = 1; L <= N; L++) {
        for ( i = 0; i < N - L + 1; i++) {
            int j = i + L - 1;
            cost[i][j] = 9999;
            for ( r = i; r <= j; r++) {
                int c = (r > i ? cost[i][r - 1] : 0) + (r < j ? cost[r + 1][j] : 0) + sum(i, j);
                if (c < cost[i][j]) {
                    cost[i][j] = c;
                    root[i][j] = r;
                }
            }
        }
    }
}

void printTree(int i, int j) {
    if (i > j) return;
    int r = root[i][j];
    printf("%d ", keys[r]);
    printTree(i, r - 1);
    printTree(r + 1, j);
}

int main() {
    constructOBST();
    printf("Optimal cost: %d\n", cost[0][N - 1]);
    printf("Optimal BST: ");
    printTree(0, N - 1);
    return 0;
}
