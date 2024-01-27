// Write a program to determine whether a given number is positive,negative, or zero.

#include<stdio.h>

void positive(), negative();

int main(){

    int num;
    printf("Enter the Number: ");
    scanf("%d",&num);

// Checking the function is Positive,Negative & Zero.
    if(num>0){
        // Calling function.
        positive(num);
    }
    else if (num<0)
    {
        // Calling function.
        negative(num);
    }
    else{
        printf("The given number is Zero.");
    }
    return 0;
}

void positive(int num){
    printf("%d is Positive Number.",num);
}
void negative(int num){
    printf("%d is Negative Number.",num);
}