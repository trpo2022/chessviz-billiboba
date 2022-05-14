#include <libchess/Cmove.h>

int check_move(char* input_step)
{
    int flag = 0;
    if (((input_step[0] >= 'a') && (input_step[0] <= 'h'))
        && ((input_step[3] >= 'a') && (input_step[3] <= 'h'))
        && ((input_step[6] >= 'a') && (input_step[6] <= 'h'))
        && ((input_step[9] >= 'a') && (input_step[9] <= 'h'))) {
        flag = 0;
    } else {
        flag = 1;
        return flag;
    }
    if (((input_step[1] >= '1') && (input_step[1] <= '8'))
        && ((input_step[4] >= '1') && (input_step[4] <= '8'))
        && ((input_step[7] >= '1') && (input_step[7] <= '8'))
        && ((input_step[10] >= '1') && (input_step[10] <= '8'))) {
        flag = 0;
    } else {
        flag = 1;
        return flag;
    }
    if (input_step[2] == '-' && input_step[8] == '-') {
        flag = 0;
    } else {
        flag = 1;
        return flag;
    }
    if (input_step[5] == ' ') {
        flag = 0;
    } else {
        flag = 1;
        return flag;
    }
    return flag;
}