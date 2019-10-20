#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int t;
    cin>>t;
   while(t--)
   {
       stack<int> s1;
    int n;
    cin>>n;

    int arr[n];


    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int max=arr[n-1];


    for(int i=n-1;i>=0;i--)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
            s1.push(arr[i]);
        }
    }


    while(!s1.empty())
    {
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<"\n";
   }
    return 0;
}