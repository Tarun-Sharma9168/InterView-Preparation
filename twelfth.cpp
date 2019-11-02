#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Program To check Leap Year or not!!!!\n");
    int year;
    printf("Enter the Year\n");
    scanf("%d",&year);

    if( year % 4 == 0 && (year%100) != 0)
    {
        printf("Given Year is leap Year\n");
    }
    else if(year%400 == 0)
    {
         printf("Given Year is leap Year\n");
    }
    else
    {
         printf("Given Year is Not leap Year\n");
    }
    return 0;
}