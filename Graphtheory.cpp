#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s;
  while(t--)
  {
      bool flag=true;
      cin>>s;
      stack<char> s1;
      int i=0;
      while(s[i] != 0)
      {
             if(s[i]=='(' || s[i] == '{' || s[i] == '[')
             {
                 s1.push(s[i]);
             }

             if(s[i]==')' || s[i] == ']' || s[i]=='}')
             {
                 if(!s1.empty())
                 {
                 char p=s1.top();
                 if( p == '(' && s[i] == ')')
                 {
                    s1.pop();
                 }
                 else if(p == '[' && s[i]==']')
                 {
                     s1.pop();
                 }
                 else if(p == '{' && s[i]=='}')
                 {
                     s1.pop();
                 }
                 else{
                     flag=false;
                     break;
                 }
                 }
                 else{
                     flag=false;
                     break;
                 }
              }
             
             i++;
      }
      if(flag)
      {
          if(!s1.empty())
          {
              cout<<"not balanced"<<"\n";
          }
          else
          {
              cout<<"balanced"<<"\n";
          }
      }
      else{
          cout<<"not balanced"<<"\n";
      }
  }
  return 0;
}