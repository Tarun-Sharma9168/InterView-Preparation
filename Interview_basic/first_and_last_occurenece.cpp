#include<algorithm>
#include<iostream>
#include<cmath>
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
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       cin>>element;
       bool flag1=false;
       bool flag2=false; 
       int first_index;
       int second_index;
    for(int i=0,j=n-1;i<=j;)
    {
          if(arr[i] == element && !flag1)
          {
              first_index=i;
              flag1=true;
          }
          else
          {
              if(!flag1)
              {
                  i++;
              }
              else{}
          }
          if(arr[j] == element && !flag2)
          { 
               second_index=j;
               flag2=true;
          }
          else
          {
              if(!flag2)
              {
                  j--;
              }
              else{}    
          }
          if(flag1 && flag2)
          {
              break;
          } 
    }
    if(!flag1 && !flag2)
    {
        cout<<"-1"<<"\n";
    }
    else
    {
        cout<<first_index<<" "<<second_index<<"\n";
    }
    }
    return 0;
}