//best case:O(N)
//average case&& worst case:O(N^2)

#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
  int n=10;
  int arr[10]={6,3,56,78,1,0,-87,9,67,10};
  for(int i=0;i<10;i++){
    int flag=0;
    for(int j=0;j<n-1;j++){
      if(arr[j]>arr[j+1]){swap(arr[j],arr[j+1]);flag=1;}
    }
    n--;
    if(flag==0)break;
  }
  for(int i=0;i<10;i++)cout<<arr[i]<<" ";
}
