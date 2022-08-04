#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int dp[31][31][31];


int knapsack(int n,int w1,int w2,int arr[],int i){
    if(i==n)return 0;
    if(dp[i][w1][w2]!=-1)return dp[i][w1][w2];
    int f1=0,f2=0,f3=0;
    if(w1>=arr[i]){
        f1=arr[i]+knapsack(n,w1-arr[i],w2,arr,i+1);
    }
    if(w2>=arr[i]){
        f2=arr[i]+knapsack(n,w1,w2-arr[i],arr,i+1);
    }
    else{
        f3=knapsack(n,w1,w2,arr,i+1);
    }
    int f=max({f1,f2,f3});
    dp[i][w1][w2]=f;
    return dp[i][w1][w2];
}
int main(){
    int arr[3]={8,2,3};
    memset(dp,-1,sizeof(dp));
    
    int n=3;
    int w1=10;
    int w2=3;
    
    cout<<knapsack(n,w1,w2,arr,0);
    
}

