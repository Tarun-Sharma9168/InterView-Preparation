//you have to find a floor of a number in the given array which is the closest of all
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;//number of testcases
    cin>>t;
    int n;
    int element;
    while(t--)
    {
         cin>>n>>element;
         long long int arr[n];
         for(int i=0;i<n;i++)
         { 
            cin>>arr[i];
         }
         long long int take_difference;
         long long int min_element=1e18+1;
         int min_index;
         bool flag=false;
         for(int i=0;i<n;i++)
         {
             take_difference=element-arr[i];
             if(take_difference >= 0)
             {
                 flag=true;
                 if(take_difference < min_element)
                 {
                   min_index=i;
                   min_element=take_difference;
                 }
             }
         }
         if(flag)
         cout<<min_index<<"\n";
         else
         {
             cout<<"-1"<<"\n";
         }
         
    }
    return 0;
}