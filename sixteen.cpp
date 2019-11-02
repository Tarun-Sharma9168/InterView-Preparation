#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int octal_number;
    printf("Octal To Decimal Conversion\n");

    printf("Enter the Octal Number Between 0 and 7\n");

    scanf("%d",&octal_number);
    int sum=0;
    int i=0;
    while(octal_number)
    {
        int p=octal_number%10;
        sum+=p*pow(8,i);
        i++;
        octal_number/=10;
    }

    printf("The decimal Equivalent is  %d\n",sum);
    return 0;
}