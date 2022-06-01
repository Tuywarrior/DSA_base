//QUESTION: Construct a stack from scratch without using stl
#include <bits/stdc++.h>
using namespace std;
#define ll long long
struct st{
  int size;
  int top;
  int elements[50];
};

st s1;
void push(st &s1,int x){
  if(s1.top==s1.size-1)
  cout<<"stack is full";
  else{
    s1.elements[++s1.top]=x;
  }
}

int pop(st &s1){
  int t;
  if(s1.top==-1)
  cout<<"stack is empty";
  else{
    t=s1.elements[s1.top--];
  }
  return t;
}

int peep(st s1,int pos){
  if(s1.top-pos+1<0)
  cout<<"stack is overflow";
  else{
    return s1.elements[s1.top-pos];
  }
}
int main(){
  s1.top=-1;
  s1.size=50;
  int n;
  cin>>n;
  int k;
  for(int i=0;i<n;i++){
    cin>>k;
    push(s1,k);
  }
  cout<<pop(s1)<<" ";
  cout<<"Enter position for peep function:"<<endl;
  cin>>k;
  cout<<peep(s1,k);
}
