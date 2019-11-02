#include<stdlib.h>
#include<stdio.h>
int main()
{
    printf("Enter the users age\n");
    int age;
    scanf("%d",&age);

    if(age < 13)
    {
        printf("child\n");
    }
    else if(age >=13 && age <=17)
    {
        printf("Teen\n");
    }
    else
    {
        printf("Adult\n");
    }
    return 0;
}