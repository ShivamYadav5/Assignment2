// Create a simple Rock-Paper-Scissors game against the computer.

#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
char comp(int num)
{
    if (num <= 32)
    {
        return 'R';
    }
    else if (num >= 33 && num <= 66)
    {
        return 'P';
    }
    else
    {
        return 'S';
    }
}
int Engine(char You, char Comp)
{
    if (You == Comp)
    {
        return 0;
    }
    if (You == 'R' && Comp == 'S')
    {
        return 1;
    }
    else if (You == 'S' && Comp == 'P')
    {
        return 1;
    }
    else if (You == 'P' && Comp == 'R')
    {
        return 1;
    }
    else if (You == 'S' && Comp == 'R')
    {
        return -1;
    }
    else if (You == 'P' && Comp == 'S')
    {
        return -1;
    }
    else if (You == 'R' && Comp == 'P')
    {
        return -1;
    }
}

int main()
{
    int num, result;
    char You, Comp;
    char op;
    do
    {
        fflush(stdin);
        srand(time(0));
        num = rand() % 1000 + 1;
        printf("%d",num);
        printf("\nWellcome to Rock-Paper-Scissor Game.\n");
        printf("***********************");
        printf("\nR for Rock\nP for Paper\nS for Scissor.\nEnter: ");
        scanf("%c", &You);
        Comp = comp(num);
        if (You == 'S' || You == 'P' || You == 'R')
        {
            result = Engine(You, Comp);
            if (result == 0)
            {
                printf("Game Draw!");
            }
            else if (result == 1)
            {
                printf("You Win!");
            }
            else
            {
                printf("You loss.\nTry Again!");
            }
        }
        else{
            printf("Please Enter From Given Option.");
        }

        printf("You Enter %c and Comp Enter %c", You, Comp);
        printf("\nPress Y to Play Again.");
        op = getch();
    } while (op == 'Y' || op == 'y');

    return 0;
}