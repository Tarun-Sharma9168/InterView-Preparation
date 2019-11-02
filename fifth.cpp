#include<stdio.h>
#include<stdlib.h>
int main()
{
    int age;
    printf("Enter the age\n");
    scanf("%d",&age);


    if(age < 21 || age > 51)
    {
        printf("Non Earning Age\n");
    }
    else{
        printf("Earning Age\n");
    }
    return 0;
}