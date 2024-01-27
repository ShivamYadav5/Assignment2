// Grade Calculation: Write a program to calculate the grade of a student based on their marks in multiple subjects.
#include<stdio.h>
int main()
{
    int physic,math,digital_logic,iit,c_programming;
    float result,GPA;
    char grade;
    printf("Enter the marks of physic subject: ");
    scanf("%d",&physic);
    printf("Enter the marks of math subject: ");
    scanf("%d",&math);
    printf("Enter the marks of digital_logic subject: ");
    scanf("%d",&digital_logic);
    printf("Enter the marks of iit subject: ");
    scanf("%d",&iit);
    printf("Enter the marks of c_programming subject: ");
    scanf("%d",&c_programming);
    int sum = (physic+math+digital_logic+iit+c_programming);
    result =(float) (sum/5.0);
    result = result/25;
    printf("Student total GPA : %.2f GPA\n",result);


    if (result>4.0)
    {
        printf("Invalid Entry of Marks.\n");
    }
    else if (result>3.6&&result<=4.0)
    {
        printf("Students Secured A+ Grade.\n");
    }
    else if (result>3.2&&result<=3.6)
    {
        printf("Students Secured A Grade.\n");
    }
    else if (result>2.8&&result<=3.2)
    {
        printf("Students Secured B+ Grade.\n");
    }
    else if (result>2.4&&result<=2.8)
    {
        printf("Students Secured B Grade.\n");
    }
    else if (result>2.0&&result<=2.4)
    {
        printf("Students Secured C+ Grade.\n");
    }
    else if (result>1.6&&result<=2.0)
    {
        printf("Students Secured C Grade.\n");
    }
    else if (result>1.4&&result<=1.6)
    {
        printf("Students Secured D Grade.\n");
    }
    else{
        printf("Fail.(NG)\n");
    }
    
    return 0;
}
