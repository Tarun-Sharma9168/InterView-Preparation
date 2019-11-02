#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("Printing The Odd Numbers Between 1 and 100\n");


    for(int i=1;i<100;i++)
    {
        if(i & 1)
        {
            printf("%d ",i);
        }
    }
    printf("\n");
    return 0;
}