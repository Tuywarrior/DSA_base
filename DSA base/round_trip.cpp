#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define all(x) x.begin(),x.end()

#define N 100005
vector<bool>vis(N,false);
vector<int>adj[N];
vector<int>V(N);

void dfs(int x,int p){
  V.push_back(x);
  for(auto i:adj[x]){
    if(p==i)continue;
    if(vis[i]==false){
      vis[i]=true;
      dfs(i,x);
    }
    else{
      V.push_back(i);
      int k=(find(all(V),i)-V.begin());
      cout<<V.size()-k<<"\n";

      while(k<V.size()) cout<<V[k++]<<" ";

      exit(0);
    }
  }
  V.pop_back();
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

  for(int i=1;i<=n;i++){
    if(vis[i]==false){
      vis[i]=true;
      dfs(i,0);
    }
  }
  cout<<"IMPOSSIBLE"<<"\n";
}