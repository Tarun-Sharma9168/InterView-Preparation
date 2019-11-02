#include<stdlib.h>
#include<stdio.h>
int main()
{
    int number;
    printf("Checking if the Number is Prime Number\n");
    printf("Enter the Number\n");
    scanf("%d",&number);
    bool flag=true;
    for(int i=2;i*i<=number;i++)
    {
        if(number % i == 0)
        {
           flag=false;
           break;
        }
    }
    if(flag)
    {
        printf("Given Number is a Prime Number\n");
    }
    else
    {
        printf("Given Number is Not Prime\n");
    }
    return 0;
}