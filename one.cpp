#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Checking the Divisibility by 6\n");

    int number;
    printf("Enter the Number\n");
    scanf("%d",&number);

    if(number % 3==0 && number%2==0)
    {
        printf("divisible by 6\n");  
    }
    else{
        printf("Not Divisible by 6\n");
    }
    return 0;
}