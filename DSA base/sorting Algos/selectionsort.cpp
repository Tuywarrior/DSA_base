//BEST CASE:O(N)
//AVG CASE&&WORST CASE:O(N^2)


#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  int n=6;
  int arr[6]={2,7,4,1,5,3};
  int arrcopy[6]={0,0,0,0,0,0};
  int k=INT_MAX;
  for(int i=0;i<6;i++){
    int mn=INT_MAX;
    for(int j=0;j<6;j++){
      if(arr[j]==k)arr[j]=INT_MAX;
      mn=min(mn,arr[j]);
    }
    k=mn;
    arrcopy[i]=mn;
  }
  for(int i=0;i<6;i++)cout<<arrcopy[i]<<" ";
  cout<<endl;
  cout<<"INPLACE SELECTION SORT:"<<"\n";
  int arri[6]={2,7,4,1,5,3};
  for(int i=0;i<5;i++){
    int imn=i;
    for(int j=i+1;j<6;j++){
      if(arri[j]<arri[imn])imn=j;
    }
    swap(arri[i],arri[imn]);
  }
  for(int i=0;i<6;i++)cout<<arri[i]<<" ";
}
