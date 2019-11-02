#include<stdio.h>
#include<stdlib.h>
int main()
{
    int whole_number;
    printf("Enter the whole Number\n");

    scanf("%d",&whole_number);
    int count=0;
    while(whole_number)
    {
       count++;
       whole_number=whole_number/10;  
    }

    printf("The Number of Digits is %d\n",count);
    return 0;

}