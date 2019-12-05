#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    int element;
    while(t--)
    {
        cin>>n;
        int arr[n];
        int arr1[n-1];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        } 
        for(int i=0;i<n-1;i++)
        {
            cin>>arr1[i];
        }
        int answer=n-1;
        for(int i=0;i<n-1;i++)
        {
               if(arr[i] != arr1[i])
               {
                   answer=i;
                   break;
               }
        }
        cout<<answer<<"\n";
    }
    return 0;

}