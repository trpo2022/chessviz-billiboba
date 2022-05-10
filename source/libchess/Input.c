#include <libchess/Input.h>

void Input(char* input_step)
{
    while (1) {
        printf("\nEnter white and black steps: ");
        fgets(input_step, step, stdin);
        if (strlen(input_step) + 1 == step)
        {
            break;
        }
            
    }
}