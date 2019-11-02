#include<stdio.h>
#include<stdlib.h>
//Five simple methods are there so you can choose any one
void swap1(int a,int b)
{
    //using xor operations
    a=a^b;
    b=a^b;
    a=b^a;

    printf("%d %d\n",a,b);
}
void swap2(int *a,int *b)
{

    //use pointer variable
    int temp=*a;
    *a=*b;
    *b=temp;

 printf("%d %d\n",*a,*b);
}
void swap3(int a,int b)
{
    //Simple basic method
    int temp=a;
    a=b;
    b=temp;

     printf("%d %d\n",a,b);
}
void swap4(int& a,int& b)
{
    //Using reference
    int temp=a;
    a=b;
    b=temp;
    printf("%d %d\n",a,b);
}
void swap5(int a,int b)
{
    //Without using the third variable
    a=a+b;
    b=a-b;
    a=a-b;

    printf("%d %d\n",a,b);
}
int main()
{
    int a;
    int b;

    printf("Enter the numbers to swap\n");
    scanf("%d",&a);
    scanf("%d",&b);
      int c,d;
      c=a;
      d=b;
    swap1(a,b);
    swap2(&a,&b);
    //when we are using pointer variable the original value of a and b are really changed.

    swap3(c,d);
    
    int e,f;

    e=c;
    f=d;
    swap4(c,d);
 //when we are using reference variable the original value of a and b are really changed(like in case of pointer variable).

    swap5(e,f);
    return 0;
}