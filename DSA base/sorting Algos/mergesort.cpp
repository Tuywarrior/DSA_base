//BEST CASE:O(N);
//WORST CASE:O(Nlog(N))


#include <bits/stdc++.h>
using namespace std;
#define ll long long 


void merge(int arr[],int l,int r,int m){
  int i,j,k;
  int nl=m-l+1;
  int nr=r-m;
  int arrl[nl],arrr[nr];
  for(int i=0;i<nl;i++){
    arrl[i]=arr[l+i];
  }
  for(int j=0;j<nr;j++){
    arrr[j]=arr[m+j+1];
  }
  i=0,j=0;k=l;

  while(i<nl&&j<nr){
    if(arrl[i]<=arrr[j]){
      arr[k]=arrl[i];
      i++;
      k++;
    }
    else{
      arr[k]=arrr[j];
      j++;
      k++;
    }
  }
  while(i<nl){
    arr[k]=arrl[i];
    i++;
    k++;
  }
  while(j<nr){
    arr[k]=arrr[j];
    j++;
    k++;
  }
}

void mergesort(int arr[],int l,int r){
  if(l<r){
    int m=l+(r-l)/2;
    mergesort(arr,l,m);
    mergesort(arr,m+1,r);
    merge(arr,l,r,m);
  }
}
int main(){
  int n=8;
  int arr[8]={2,4,1,6,8,5,3,7};

  mergesort(arr,0,n-1);
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
