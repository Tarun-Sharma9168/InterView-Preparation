#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int N;
    while(t--)
    {
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            arr[i]=arr[i]*arr[i];
        }

        sort(arr,arr+N);
        bool flag=false; 
    for(int i=N-1;i>=0;i--)
    {
        int a=0;
        int b=i-1;
        while(a<b)
        {
            if(arr[a]+arr[b] == arr[i]){
                flag=true;
                break;
            }
            else if(arr[a]+arr[b] > arr[i])
            {
             b--;
            }
            else{

                a++;
            }
        }
        if(flag)
        {
            break;
        }
    }
        if(flag)
        {
            cout<<"Yes"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}