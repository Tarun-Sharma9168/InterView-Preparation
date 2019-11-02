#include<stdio.h>
#include<stdlib.h>
int Gcd(int a,int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        return Gcd(b,a%b);
    }
}
int main()
{
    printf("Lcm of Two Numbers\n");

    int a,b;

    printf("Enter the First Number\n");
    scanf("%d",&a);

    printf("Enter the Second Number\n");
    scanf("%d",&b);
    int gcd=Gcd(a,b);
    int Lcm=(a*b)/gcd;


    printf("Lcm Of two numbers is %d\n",Lcm);
    return 0;
}
