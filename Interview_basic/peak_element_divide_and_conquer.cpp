//We are using binary search type algorithm here
//to find the peak element
//So be ready
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
//first function
int find_peak_second(int *arr,int left,int right,int n)
{
  //As this function follows the approach we use in binary search 
  //that is finding middle element and simply compare the element

  int mid=left+(right -left)/2;//to avoid overflow otherwise it is equal to (right+left)/2
  if((mid==0 ||arr[mid-1] <= arr[mid])   && ( mid==n-1 || arr[mid] >=arr[mid+1])
  return mid;

  else if(mid>0 && arr[mid-1] > arr[mid])//it means you will definitely get your peak element in the left side
  //we are not saying that it cannot be in right possible but you will also and definitely get in the left
       return find_peak_second(arr,low,mid-1,n);

  else  
      return find_peak_second(arr,mid+1,n-1,n);      
}
//second function
int find_peak_main(int *arr,int n)
{
 return find_peak_second(arr,0,n-1,n);
}
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
            cin<<arr[i];
       }  
       cout<<find_peak_main(arr,n)<<"\n";  
    }
    return 0;

}