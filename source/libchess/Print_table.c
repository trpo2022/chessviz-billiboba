#include <libchess/Print_table.h>

void Print_table(int** chess)
{
    int i, j, k = n;

    for (i = 0; i < n; i++) {
        printf("%d", k);
        for (j = 0; j < n; j++) {
            if (chess[i][j] == 0)
                printf(" ");

            if (chess[i][j] == 1)
                printf("p");
            if (chess[i][j] == 2)
                printf("r");
            if (chess[i][j] == 3)
                printf("n");
            if (chess[i][j] == 4)
                printf("b");
            if (chess[i][j] == 5)
                printf("q");
            if (chess[i][j] == 6)
                printf("k");

            if (chess[i][j] == 10)
                printf("P");
            if (chess[i][j] == 20)
                printf("R");
            if (chess[i][j] == 30)
                printf("N");
            if (chess[i][j] == 40)
                printf("B");
            if (chess[i][j] == 50)
                printf("Q");
            if (chess[i][j] == 60)
                printf("K");
        }
        k--;
        printf("\n");
    }
    printf(" abcdefgh");
}