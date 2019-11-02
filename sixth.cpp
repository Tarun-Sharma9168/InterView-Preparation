#include<stdio.h>
#include<stdlib.h>
void bubblesort(int *arr,int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=1;j <= size-i-1;j++)//important why size-i-1 because after every iteration last one element is at their right position
        {
            if(arr[j] > arr[j-1])//Descending Order 
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
int main()
{
    int size;
    scanf("%d",&size);

    int arr[size];

    printf("Enter the array elements\n");
    for(int i=0;i<size;i++)
    {
    scanf("%d",&arr[i]);
    }
     bubblesort(arr,size);  
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}