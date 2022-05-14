#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <libchess/Print_table.h>
#include <libchess/Input.h>
#include <libchess/Move.h>
#include <libchess/Table.h>
#include <libchess/Cmove.h>

#define n 8
#define step 12

int main()
{
    int** chess;
    char* input_step;
    int redzon = 1;

    chess = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++)
        chess[i] = (int*)malloc(n * sizeof(int));
    input_step = (char*)malloc(step * sizeof(char));

    Table(chess);
    Print_table(chess);

    while (redzon == 1) {
            printf("\nEnter white and black steps: ");
            Input(input_step);
            redzon =check_move(input_step);
        }
    printf("\n");
    for (int i = 0; i < step; i++)
        printf("%c", input_step[i]);
    Move(chess, input_step);
    printf("\n");
    Print_table(chess);

    return 0;
}