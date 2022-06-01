#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  string s;
  cin>>s;
  stack<char>s1;
  string S="";
  for(int i=0;i<s.length();i++){
    if(s[i]=='{'||s[i]=='('||s[i]=='[')
    s1.push(s[i]);
    else{
      if(s[i]=='}'&&s1.top()=='{'||s[i]==']'&&s1.top()=='['||s[i]==')'&&s1.top()=='(')
      S="Balanced",s1.pop();
      else{
        S="Not Balanced";
        break;
      }
    }
  }
  cout<<S<<"\n";
}