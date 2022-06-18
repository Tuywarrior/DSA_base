#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
  int data;
  node* next;
};
typedef node* LPTR;

int main(){
  LPTR L,T,L1;
  L=new(node);
  L->next=NULL;
  int n;
  while(cin>>n&&n!=-1){
    L1=L;
    while(L1->next!=NULL)
    L1=L1->next;
    T=new(node);
    T->data=n;
    T->next=NULL;
    L1->next=T;
  }
  L=L->next;
  
  while(L!=NULL){
    cout<<L->data<<" ";
    L=L->next;
  }
}