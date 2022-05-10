#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libchess/Print_table.h>
#include <libchess/Input.h>
#include <libchess/Move.h>
#include <libchess/Table.h>

#define n 8
#define step 12

int main()
{
    int** chess;
    char* input_step;

    chess = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        chess[i] = (int*)malloc(n * sizeof(int));
    input_step = (char*)malloc(step * sizeof(char));

    Table(chess);
    Print_table(chess);
    Input(input_step);

    printf("\n");
    for (int i = 0; i < step; i++)
        printf("%c", input_step[i]);
    Move(chess, input_step);
    printf("\n");
    Print_table(chess);

    return 0;
}