//hashing problem and we are using the c++ stl map here in this
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;//number of testcases
    cin>>t;
    int n;//size of the input
    string s;
    while(t--)
    {
       cin>>n;
       map<string ,int> gg;//declaring ordered map  we can use the unordered map here also
       int max=-1e9;
       while(n--)
       {
           cin>>s;
           gg[s]++;

           if(gg[s] > max)
           {
               max=gg[s];
           }
           map<string ,int> ::iterator it;
           for(it=gg.begin();it!=gg.end();++it)
           {
               if(it->second == max)
               {
                   cout<<it->first<<" "<<max<<"\n";
                   break;
               }
           }
       }
      

    }
    return 0
}