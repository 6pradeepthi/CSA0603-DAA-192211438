
#include <stdio.h>
#include <limits.h>

#define N 5
#define INF 9999

int dist[N][N] = {
    {0, 10, 15, 20, 25},
    {10, 0, 35, 30, 20},
    {15, 35, 0, 25, 30},
    {20, 30, 25, 0, 15},
    {25, 20, 30, 15, 0}
};

int dp[1 << N][N];

void tsp() {
	int mask,node,i,j,prevNode,prevMask;
    for ( i = 0; i < (1 << N); i++) {
        for ( j = 0; j < N; j++) {
            dp[i][j] = INF;
        }
    }

    dp[1][0] = 0;

    for ( mask = 1; mask < (1 << N); mask++) {
        for ( node = 0; node < N; node++) {
            if ((mask & (1 << node)) == 0) continue;
            int prevMask = mask ^ (1 << node);
            for ( prevNode = 0; prevNode < N; prevNode++) {
                if ((prevMask & (1 << prevNode)) == 0) continue;
                int newDist = dp[prevMask][prevNode] + dist[prevNode][node];
                dp[mask][node] = (dp[mask][node] < newDist) ? dp[mask][node] : newDist;
            }
        }
    }

    int minDist = INF;
    for ( i = 0; i < N; i++) {
        minDist = (minDist < dp[(1 << N) - 1][i] + dist[i][0]) ? minDist : dp[(1 << N) - 1][i] + dist[i][0];
    }

    printf("Minimum distance: %d\n", minDist);
}

int main() {
    tsp();
    return 0;
}
