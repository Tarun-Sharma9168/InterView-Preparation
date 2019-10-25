#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int n;
    while(t--)
    {
        cin>>n;
        int arr[n];  
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        int duplicate[n];
        int i=0;
        for(int as=0;as<n;as++)
        { 
           if(arr[as] & 1)
           {
               duplicate[i]=arr[as];
               i++;
           }
        }
        sort(arr,arr+n);
        for(int as=0;as<n;as++)
        {
        if(!(arr[as]&1))
        {
            duplicate[i]=arr[as];
            i++;
        }
        }
        for(int j=0;j<i;j++)
        {
            cout<<duplicate[j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}