#include <stdio.h>
#include <string.h>

void BoardChess (char board[8][8])
{
    char black = 'b';
    char white = 'w';
    int i,j;
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            if (i%2!=0)
            {
                if (j%2!=0)
                {
                   board[i][j]= white;
                   
                }
                if (j%2==0)
                {
                    board[i][j]= black;
                }
            }
            if (i%2==0)
            {
                if (j%2!=0)
                {
                   board[i][j]= black;
                   
                }
                if (j%2==0)
                {
                    board[i][j]= white;
                }
                
            }
        }
        
    }
    for ( i = 0; i < 8; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            if (i==0)
            {
                if (j==0)
                {
                    board[i][0]='r';
                    board[i][7]='r';
                }
                if (j==1)
                {
                    board[i][1]='n';
                    board[i][6]='n';
                }
                if (j==2)
                {
                    board[i][2]='b';
                    board[i][5]='b';
                }
                if (j==3)
                {
                    board[i][3]='q';
                }
                if (j==4)
                {
                    board[i][4]='k';
                }
            }
            if (i==1)
            {
                board[i][j]='p';
            }
            if (i==6)
            {
                board[i][j]='P';
            }
            if (i==7)
            {
                if (j==0)
                {
                    board[i][0]='R';
                    board[i][7]='R';
                }
                if (j==1)
                {
                    board[i][1]='N';
                    board[i][6]='N';
                }
                if (j==2)
                {
                    board[i][2]='B';
                    board[i][5]='B';
                }
                if (j==3)
                {
                    board[i][3]='Q';
                }
                if (j==4)
                {
                    board[i][4]='K';
                }
            }
        }
    }
}

void figures ()
{
    char alf[8] = "abcdefgh";
    int i,j=0;
    char board[8][8];
    BoardChess(board);

    for ( i = 7; i >= 0; i--)
    {
        printf("%d ", i+1);
        for ( j = 0; j < 8; j++)
        {
            printf("%c  ",board[i][j]);
            if (j==7)
            {
                printf("\n");
            }
        }
    }
    printf(" ");
    for (i = 0; i < 8; i++)
    {
        printf(" %c ", alf[i]);
    }
}

int main ()
{
    figures();
    return 0;
}