// Write a program to check whether a given number is even or odd.
#include<stdio.h>

int Even_Odd(int num){
    
    if (num%2 == 0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int num,result;
    // num=25;
    printf("Enter the Number: ");
    scanf("%d",&num);
    
    result = Even_Odd(num);
    if (result!=1)
    {
        printf("%d is Odd Number.",num);
    }
    else{
        printf("%d is Even Number.",num);
    }
    
    return 0;
}
