#include <bits/stdc++.h>
using namespace std;
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
    queue<int>q;
    vector<bool>vis(n+1,false);
    for(int i=1;i<=n;i++){
        if(vis[i]==false){
            q.push(i);
            vis[i]=true;
            while(!q.empty()){
                int x=q.front();
                cout<<x<<" ";
                vis[x]=true;
                q.pop();
                for(auto it:V[x]){
                    if(vis[it]==false){
                        q.push(it);
                        vis[it]=true;
                    }
                }
            }
        }
    }
}