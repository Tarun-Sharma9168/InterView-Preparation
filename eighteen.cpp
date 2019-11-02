#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
    //Quadratic equation of the form ax^2+bx+c
    int a;
    int b;
    int c;

    printf("Quadratic Equation Solver\n");
    printf("Enter the value Of a:coefficient of a second degree term\n");

    scanf("%d",&a);

    printf("Enter the value Of b:coefficient of a first degree term\n");

    scanf("%d",&b);

    printf("Enter the value Of c:constant term\n");

    scanf("%d",&c);
    
    int discriminant=(b * b)-4*a*c;

    double sol_first =  ((-b) + sqrt(discriminant))/2*a;

    double sol_second= ((-b) - sqrt(discriminant))/2*a;

    printf("The solutions of the equation is %lf and %lf \n",sol_first,sol_second);
    return 0;
}