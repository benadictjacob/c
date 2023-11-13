#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>
char board[3][3];
const char PLAYER = 'X';
const char COMPUTERS = 'O';

void resetboard();
void printboard();
int checkfreespaces();
void playermove();
void computermove();
char checkwinners();
void printwinner(char winner);

int main()
{
    char winner = ' ';
    resetboard();
    while (winner == ' ' && checkfreespaces() != 0)
    {
        printboard();
        playermove();
        winner = checkwinners();
        if (winner != ' ' || checkfreespaces() == 0)
        {
            break;
        }
        computermove();
        winner = checkwinners();
        if (winner != ' ' || checkfreespaces() == 0)
        {
            break;
        }
    }
    printboard();
    printwinner(winner);
    return 0;
}
void resetboard()
{
    // this function is to reset rows and columns//
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }
}
void printboard()
{
    printf(" %c | %c | %c\n", board[0][0], board[0][1], board[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[1][0], board[1][1], board[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}
int checkfreespaces()
{
    int freespaces = 9;//because there are 9 elements in the grid the nummber of free spaces assingrd will be 9//
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] != ' ')
            {
                freespaces--;/*if there is any element in the grid as filled then the number off free spaces will decrement 
                and if all spaces are filled then the number of freespaces is equal to zero*/
            }
        }
    }
    return freespaces;
}
void playermove()
{
    int x;
    int y;
    do
    {
        printf("enter row no #(1-3):");
        scanf(" %d", &x);
        x--;
        printf("enter coloumy no #(1-3):");
        scanf(" %d", &y);
        y--;
        if (board[x][y] != ' ')
        {
            printf("INVALID MOVE!\n");
        }
        else
        {
            board[x][y] = PLAYER;
            break;
        }
    } while (board[x][y] != ' ');//here we use do while because we only need to execute more than once when there is an invalid input //
}
void computermove()
{
    // creat a seed based on current time
    srand(time(0));
    int x;
    int y;
    if (checkfreespaces() > 0)
    {
        do
        {
            x = rand() % 3;
            y = rand() % 3;
        } while (board[x][y] != ' ');
        board[x][y] = COMPUTERS;
    }
    else
    {
        printwinner(' ');
    }
}
char checkwinners()
{
    // to check winners//
    // check rows//
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][0] == board[i][2])
        {
            return board[i][0];
        }
    }
    // check coloumns//
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] && board[0][i] == board[2][i])
        {
            return board[0][i];
        }
    }
    // check diagonals//

    if (board[0][0] == board[1][1] && board[0][0] == board[2][2])//loops are'nt a  part when we check for diagonals //
    {
        return board[0][0];
    }
    if (board[0][2] == board[1][1] && board[0][2] == board[2][0])
    {
        return board[0][2];
    }
    return ' ';
}

void printwinner(char winner)
{
    if (winner == PLAYER)
        printf("YOU WIN");
    else if (winner == COMPUTERS)
        printf("YOU LOSE !");
    else
        printf(" IT'S A TIE");
}
