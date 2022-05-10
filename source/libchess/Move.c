#include <libchess/Move.h>

void Move(int** chess, char* input_step)
{
    int i, Xw1, Yw1, Xw2, Yw2, Xb1, Yb1, Xb2, Yb2, temp;

    for (i = 0; i < step; i++) {
        if (input_step[i] == 'a')
            Xw1 = 0;
        if (input_step[i] == 'b')
            Xw1 = 1;
        if (input_step[i] == 'c')
            Xw1 = 2;
        if (input_step[i] == 'd')
            Xw1 = 3;
        if (input_step[i] == 'e')
            Xw1 = 4;
        if (input_step[i] == 'f')
            Xw1 = 5;
        if (input_step[i] == 'g')
            Xw1 = 6;
        if (input_step[i] == 'h')
            Xw1 = 7;

        if (input_step[i] == '8')
            Yw1 = 0;
        if (input_step[i] == '7')
            Yw1 = 1;
        if (input_step[i] == '6')
            Yw1 = 2;
        if (input_step[i] == '5')
            Yw1 = 3;
        if (input_step[i] == '4')
            Yw1 = 4;
        if (input_step[i] == '3')
            Yw1 = 5;
        if (input_step[i] == '2')
            Yw1 = 6;
        if (input_step[i] == '1')
            Yw1 = 7;

        if (input_step[i] == '-')
            goto m;
    }

m:
    for (i = 3; i < step; i++) {
        if (input_step[i] == 'a')
            Xw2 = 0;
        if (input_step[i] == 'b')
            Xw2 = 1;
        if (input_step[i] == 'c')
            Xw2 = 2;
        if (input_step[i] == 'd')
            Xw2 = 3;
        if (input_step[i] == 'e')
            Xw2 = 4;
        if (input_step[i] == 'f')
            Xw2 = 5;
        if (input_step[i] == 'g')
            Xw2 = 6;
        if (input_step[i] == 'h')
            Xw2 = 7;

        if (input_step[i] == '8')
            Yw2 = 0;
        if (input_step[i] == '7')
            Yw2 = 1;
        if (input_step[i] == '6')
            Yw2 = 2;
        if (input_step[i] == '5')
            Yw2 = 3;
        if (input_step[i] == '4')
            Yw2 = 4;
        if (input_step[i] == '3')
            Yw2 = 5;
        if (input_step[i] == '2')
            Yw2 = 6;
        if (input_step[i] == '1')
            Yw2 = 7;

        if (input_step[i] == ' ')
            break;
    }

    for (i = 6; i < step; i++) {
        if (input_step[i] == 'a')
            Xb1 = 0;
        if (input_step[i] == 'b')
            Xb1 = 1;
        if (input_step[i] == 'c')
            Xb1 = 2;
        if (input_step[i] == 'd')
            Xb1 = 3;
        if (input_step[i] == 'e')
            Xb1 = 4;
        if (input_step[i] == 'f')
            Xb1 = 5;
        if (input_step[i] == 'g')
            Xb1 = 6;
        if (input_step[i] == 'h')
            Xb1 = 7;

        if (input_step[i] == '8')
            Yb1 = 0;
        if (input_step[i] == '7')
            Yb1 = 1;
        if (input_step[i] == '6')
            Yb1 = 2;
        if (input_step[i] == '5')
            Yb1 = 3;
        if (input_step[i] == '4')
            Yb1 = 4;
        if (input_step[i] == '3')
            Yb1 = 5;
        if (input_step[i] == '2')
            Yb1 = 6;
        if (input_step[i] == '1')
            Yb1 = 7;

        if (input_step[i] == '-')
            goto l;
    }

l:
    for (i = 9; i < step; i++) {
        if (input_step[i] == 'a')
            Xb2 = 0;
        if (input_step[i] == 'b')
            Xb2 = 1;
        if (input_step[i] == 'c')
            Xb2 = 2;
        if (input_step[i] == 'd')
            Xb2 = 3;
        if (input_step[i] == 'e')
            Xb2 = 4;
        if (input_step[i] == 'f')
            Xb2 = 5;
        if (input_step[i] == 'g')
            Xb2 = 6;
        if (input_step[i] == 'h')
            Xb2 = 7;

        if (input_step[i] == '8')
            Yb2 = 0;
        if (input_step[i] == '7')
            Yb2 = 1;
        if (input_step[i] == '6')
            Yb2 = 2;
        if (input_step[i] == '5')
            Yb2 = 3;
        if (input_step[i] == '4')
            Yb2 = 4;
        if (input_step[i] == '3')
            Yb2 = 5;
        if (input_step[i] == '2')
            Yb2 = 6;
        if (input_step[i] == '1')
            Yb2 = 7;

        if (input_step[i] == ' ')
            break;
    }

    temp = chess[Yw1][Xw1];
    chess[Yw1][Xw1] = chess[Yw2][Xw2];
    chess[Yw2][Xw2] = temp;

    temp = chess[Yb1][Xb1];
    chess[Yb1][Xb1] = chess[Yb2][Xb2];
    chess[Yb2][Xb2] = temp;
}
