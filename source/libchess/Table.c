#include <libchess/Table.h>

void Table(int** chess)
{
    int i, j;
    for (i = 0; i < n; i++) {
        switch (i) {
        case 0:
            chess[i][0] = 2;
            chess[i][1] = 3;
            chess[i][2] = 4;
            chess[i][3] = 5;
            chess[i][4] = 6;
            chess[i][5] = 4;
            chess[i][6] = 3;
            chess[i][7] = 2;
            break;

        case 1:
            for (j = 0; j < n; j++) {
                chess[i][j] = 1;
            }
            break;
        case 2:
            for (j = 0; j < n; j++) {
                chess[i][j] = 0;
            }
            break;
        case 3:
            for (j = 0; j < n; j++) {
                chess[i][j] = 0;
            }
            break;
        case 4:
            for (j = 0; j < n; j++) {
                chess[i][j] = 0;
            }
            break;
        case 5:
            for (j = 0; j < n; j++) {
                chess[i][j] = 0;
            }
            break;
        case 6:
            for (j = 0; j < n; j++) {
                chess[i][j] = 10;
            }
            break;
        case 7:
            chess[i][0] = 20;
            chess[i][1] = 30;
            chess[i][2] = 40;
            chess[i][3] = 50;
            chess[i][4] = 60;
            chess[i][5] = 40;
            chess[i][6] = 30;
            chess[i][7] = 20;
            break;
        }
    }
}