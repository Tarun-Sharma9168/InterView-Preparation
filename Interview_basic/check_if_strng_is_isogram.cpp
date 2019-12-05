//isogram  number or string means any number or alphabet must have frequency one and strictly not more than one 
#include<bits/stdc++.h>
using namespace std;
bool isIsogram(string s);
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<isIsogram(s)<<endl;
    }
	return 0;
}
/*This is a function problem.You only need to complete the function given below*/
//Complete this function
bool isIsogram(string s)
{
    int hash[256];//some extra space we are using so that we can enjoy hashing
    for(int i=0;i<256;++i)
    {
        hash[i]=0;
    }
    for(int i=0;i<s.length();++i)
    {
        if(hash[s[i]])
        {
            return false;
        }
        else
        {
            hash[s[i]]++;
        }
    }
    return true;
    //Your code here
}