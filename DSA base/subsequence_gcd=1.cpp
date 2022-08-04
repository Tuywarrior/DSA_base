#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 1000

int gcd(int a,int b){
    if(a==0)return b;
    return gcd(b%a,a);
}
int func(int arr[],int n,int index,int dp[][MAX],int c){
    if(index==n){
        if(c==1)return 1;
        else return 0;
    }
    if(dp[index][c]!=-1)return dp[index][c];
    
    int ans=func(arr,n,index+1,dp,c)+func(arr,n,index+1,dp,gcd(arr[index],c));
    return dp[index][c]=ans;
}

int countsub(int arr[],int n){
    int dp[n][MAX];
    int count=0;
    memset(dp,-1,sizeof(dp));
    for(int i=0;i<n;i++){
        count+=func(arr,n,i+1,dp,arr[i]);
    }
    return count;
}

int main(){
    int arr[4]={3,4,8,16};
    cout<<countsub(arr,4);
    
}

