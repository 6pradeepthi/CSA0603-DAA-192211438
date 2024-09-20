#include <stdio.h>

int main() {
    int num;
    int i,j;
    printf("Enter a limit: ");
    scanf("%d", &num);

    printf("Prime numbers: \n");
    for (i = 2; i <= num; i++) {
        int flag = 0;
        for ( j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("%d ", i);
    }

    return 0;
}
