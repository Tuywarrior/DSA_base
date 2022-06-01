#include <bits/stdc++.h>
using namespace std;
#define ll long long 
stack<int>s1;
void insert(int x){
  if(s1.size()==0)
  s1.push(x);
  else{
    int a=s1.top();s1.pop();
    insert(x);
    s1.push(a);
  }
}
void reverse(){
  if(s1.size()>0){
    int x=s1.top();
    s1.pop();
    reverse();

    insert(x);
  }
}
int main(){
  int n;
  cin>>n;
  int k;
  for(int i=0;i<n;i++){
    cin>>k;
    s1.push(k);
  }
  reverse();
  while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
  }
}