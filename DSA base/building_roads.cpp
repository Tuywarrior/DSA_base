#include <bits/stdc++.h>
using namespace std;
#define ll long long 
void dfs(vector<int>adj[],vector<bool>&vis,int i){
  vis[i]=true;
  for(auto it:adj[i]){
    if(vis[it]==false){
      dfs(adj,vis,it);
    }
  }
}
int main(){
  int n,m;
  cin>>n>>m;
  vector<int>adj[n+1];
  int u,v;
  for(int i=1;i<=m;i++){
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<bool>vis(n+1,false);
  vector<int>V;
  for(int i=1;i<=n;i++){
    if(vis[i]==false){
      V.push_back(i);
      vis[i]=true;
      dfs(adj,vis,i);
    }
  }
  cout<<V.size()-1<<"\n";
  for(int i=0;i<V.size()-1;i++){
    cout<<V[i]<<" "<<V[i+1]<<"\n";
  }
}