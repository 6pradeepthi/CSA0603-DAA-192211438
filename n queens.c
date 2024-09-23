#include <stdio.h>
#define N 4 
int board[N][N];
void printBoard() {
	int i,j;
    for ( i = 0; i < N; i++) {
        for ( j = 0; j < N; j++) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
}
int isSafe(int row, int col) {
	int i,j;
    for ( i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return 0;
        }
    }
    for ( i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return 0;
        }
    }
    for ( i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return 0;
        }
    }
    return 1;
}
int solveNQueens(int row) {
	int col;
    if (row == N) {
        printBoard();
        return 1;
    }
    for ( col = 0; col < N; col++) {
        if (isSafe(row, col)) {
            board[row][col] = 1;
            if (solveNQueens(row + 1)) {
                return 1;
            }
            board[row][col] = 0; 
        }
    }
    return 0;
}
int main() {
	int i,j;
    for ( i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            board[i][j] = 0;
        }
    }
    printf("Solutions for %d-Queens problem:\n", N);
    solveNQueens(0);
    return 0;
}
