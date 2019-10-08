#include<iostream>
#include<stack>
using namsespace std;
int main()
{
    int t;
    cin>>t;
    int N;
    int p;
    while(t--)
    {
        cin>>N;
        int arr[N];
        stack<int> s1;
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            s1.push(arr[i]);
        }
        for(int i=0;i<N;i++)
        {
             p=s1.top();

            cout<<p<<" ";
            s1.pop();
        }
        cout<<"\n";
    }
    return 0;
}