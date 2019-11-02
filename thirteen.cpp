#include<stdlib.h>
#include<stdio.h>
int main()
{
    int whole_number;
    printf("Reversing the Number\n");

    printf("Enter the Number\n");
    scanf("%d",&whole_number);

    int sum=0;
    while(whole_number)
    {
        int p = (whole_number)%10;
        sum = sum*10 + p;
        whole_number/=10;
    }

    printf("The Reversed Number is %d\n",sum);
    return 0;
}