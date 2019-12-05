//Closest pair problem Given two arrays and a number x,
//find the pair whose sum is closest to x and the pair has an element from each array.
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
   int t;//number of testcases
   cin>>t;

   int n;//size of the first array
   int m;//size of the second array
   int element;
   while(t--)
   {
       cin>>n>>m;

       int arr1[n];
       int arr2[m];


       for(int i=0;i<n;i++)
       {
           cin>>arr1[i];//Inputting the first array
       }

       for(int i=0;i<m;i++)
       {
           cin>>arr2[i];//Inputting the second array
       }

       sort(arr1,arr1+n);//sort the first array
       sort(arr2,arr2+m);//sort the second array
       cin>>element;
       int i=0;
       int j=m-1;
       long long int min=1e18+1; 
       int track_difference;
       int my_index_i;
       int my_index_j; 
       while(i < n && j>=0)
       {
           int p=arr1[i]+arr2[j];
           track_difference = abs(element-p);
           if(track_difference < min)
           {
               min=track_difference;
               my_index_i=i;
               my_index_j=j;
           }
           if(track_difference == 0)
           {
               break;
           }
           else if( arr1[i]+arr2[j] < element)
           {
               i++;
           }
           else
           {
               j--;
           }
       }
       cout<<arr1[my_index_i]<<" "<<arr2[my_index_j]<<"\n";
   }
return 0;
}