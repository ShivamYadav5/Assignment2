// Electricity Bill: Write a program to calculate the electricity bill of a customer based on their usage and tariff rates.

#include<stdio.h>
int main()
{
    float unit,total;
    printf("Enter the total unit of a customer takes in a month: ");
    scanf("%f",&unit);

    if (unit <= 20)
    {
        total = 80;
        printf("The electricity bill of a customer is : RS. %.3f",total);
    }
    else if(unit > 20 && unit<=250){
        total = 80 + (unit-20)*7.30;
        printf("The electricity bill of a customer is : RS. %.3f",total);
    }
    else{
        total = 80 + 230*7.30 + (unit-250)*9.90;
        printf("The electricity bill of a customer is : RS. %.3f",total);

    }


    return 0;
}
