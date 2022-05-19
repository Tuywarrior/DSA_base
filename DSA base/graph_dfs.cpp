#include <bits/stdc++.h>
using namespace std;
//recursive approach
void dfs(int x,vector<int>V[],vector<bool> &vis){
  vis[x]=true;
  cout<<x<<" ";
  for(auto it:V[x]){
    if(vis[it]==false){
      dfs(it,V,vis);
    }
  }
}
int32_t main(){
  int n,m;
  cin>>n>>m;
  vector<int>V[n+1];
  int u,v;
  for(int i=0;i<m;i++){
    cin>>u>>v;
    V[u].push_back(v);
    V[v].push_back(u);
  }
  vector<bool>vis(n+1,false);
  for(int i=1;i<=n;i++){
    if(vis[i]==false){
      dfs(i,V,vis);
    }
  }
}



//stack approach

// stack<int>s1;
// vector<bool> vis(n+1,false);
// for(int i=1;i<=n;i++){
//   if(vis[i]==false){
//     s1.push(i);
//     while(!s1.empty()){
//       int x=s1.top();
//       s1.pop();
//       if(vis[x]==false){
//         vis[x]=true;
//         cout<<x<<" ";
//         for(auto it:adj[x]){
//           if(vis[i]==false)
//           s1.push(it);
//         }
//       }
//     }
//   }
// }