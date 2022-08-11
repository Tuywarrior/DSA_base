// Life       is light
// Illuminate it utmost
//                   - KR
#include <bits/stdc++.h>
using namespace std;

void topo(int i,vector<bool>vis,vector<int>adj[],stack<int>&s){
    vis[i]=true;
    for(auto x:adj[i])
        if(!vis[x])
            topo(x,vis,adj,s);
    s.push(i);
}

int main(){
    int u,v;
    vector<int>V[6];
    for(int i=0;i<6;i++){
        cin>>u>>v;
        V[u].push_back(v);
    }
    stack<int>s;
    vector<bool>vis(6,false);
    for(int i=0;i<6;i++){
        if(!vis[i])
        topo(i,vis,V,s);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}


