#include<stdlib.h>
#include<stdio.h>
int factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1); 
    }
}
int main()
{
    printf("Finding Factorial Of a Number\n");
    int n;

    printf("Enter the Number To find To find the factorial of a number\n");
    scanf("%d",&n);

    int result=factorial(n);

    printf("The factorial of a Number is %d\n",result);
    return 0;
}