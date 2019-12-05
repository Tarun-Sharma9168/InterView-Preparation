//Worst case time complexity of this code is O(n)
//Question is can we do better yes we can do
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int t;//no of the test_cases
    cin>>t;
    int n;//for the number of the element
    while(t--)
    {
        cin>>n;   //Size of the array
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];//inputting the array
        }
        int peak_element=-1; 
        for(int i=0;i<n;i++)
        {
            if((i-1 >= 0) && i+1 < n)
            {
                if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
                {
                    peak_element=i;
                    break;
                }
            }
            else if(i-1 < 0)
            {
                if(arr[i] > arr[i+1])
                {
                    peak_element=i;
                    break;
                }
            }
            else
            {
                if(arr[i] > arr[i-1])
                {
                    peak_element=i;
                    break;
                }
            }
        }
        if(peak_element != -1)
        {
           cout<<arr[peak_element]<<"\n";
        }
           else
           {
               cout<<"-1"<<"\n";
           }
    }
    return 0;
}