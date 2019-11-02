#include<stdio.h>
#include<stdlib.h>
#include<stddef.h>
void insertion_sort(int *arr,int size)
{
  for(int i=1;i<size;i++)
  {
      for(int j = i ; j > 0 ; j--)
      {
         if(arr[j] < arr[j-1])
         {
             arr[j]=arr[j]^arr[j-1];
             arr[j-1]=arr[j]^arr[j-1];
             arr[j]=arr[j-1]^arr[j];

             /*
             swapping a and b using xor operator

             a=a^b;
             b=a^b;
             a=b^a;
             using bit wise xor operator
             */
         }
      }
  }
}
int main()
{
    int n;
    scanf("%d",&n);

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    insertion_sort(arr,n);


    for(int i=0;i<n;i++)
    {
         printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}