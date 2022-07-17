//WORST CASE:O(N^2);
//BEST CASE:O(N);

#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
  int arr[6]={7,2,5,3,8,9};
  for(int i=1;i<6;i++){
    int val=arr[i];
    int hole=i;
    while(hole>0&&arr[hole-1]>val){
      arr[hole]=arr[hole-1];
      hole--;
    }
    arr[hole]=val;
  }
  for(int i=0;i<6;i++)cout<<arr[i]<<" ";
}
