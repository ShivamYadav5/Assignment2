// Quadratic Equation Roots: Write a program to solve a quadratic equation and find its roots (real or imaginary).
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;
    // printf("Discriminant = %.2lf\n", discriminant);

    // condition for real and different roots
    if (a == 0)
    {
        printf("The Equation is not quadratic equation.");
    }
    else
    {
        if (discriminant > 0)
        {
            printf("The Roots are real and different.\n");
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("Root1 = %.2lf and Root2 = %.2lf", root1, root2);
        }

        // condition for real and equal roots
        else if (discriminant == 0)
        {
            printf("The Roots are real and Equal\n.");
            root1 = root2 = -b / (2 * a);
            printf("Root1 = Root2 = %.2lf;", root1);
        }

        // if roots are not real
        else
        {
            printf("The Roots are imaginary and different.\n");
            realPart = -b / (2 * a);
            imagPart = sqrt(-discriminant) / (2 * a);
            printf("Root1 = %.2lf+%.2lfi and Root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
        }
    }

    return 0;
}
