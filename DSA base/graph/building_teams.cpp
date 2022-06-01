#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define N 100005
vector<bool>vis(N,false),team(N,false);
vector<int>adj[N];
vector<int>V(N);
bool possible;

void dfs(int x,int p=0){
  for(int i:adj[x]){
    if(i!=p){
      if(vis[i]==false){
        team[i]=!team[x];
        vis[i]=true;
        dfs(i,x);
      }
      else{
        if(team[i]==team[x])
          possible=false;
      }
    }
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  int u,v;
  for(int i=0;i<m;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  possible=true;

  for(int i=1;i<=n;i++){
    if(vis[i]==false){
      vis[i]=true;
      dfs(i);
    }
  }
  if(!possible)
    cout<<"IMPOSSIBLE"<<"\n";
  else{
    for(int i=1;i<=n;i++){
      if(team[i]==true)
        cout<<2<<" ";
      else
        cout<<1<<" ";
    }
  }
}
