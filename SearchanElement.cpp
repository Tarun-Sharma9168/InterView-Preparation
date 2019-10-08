#include<iostream>
using namespace std;
int search_element(int *arr,int element,int size)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int t;
    cin>>t;
    int N;
    int element;
    while(t--)
    {
       cin>>N;
       int arr[N];
       for(int i=0;i<N;i++)
       {
           cin>>arr[i];
       }
       cin>>element;
       cout<<search_element(arr,element,N)<<"\n";
    }
    return 0;
}