// Life       is light
// Illuminate it utmost
//                   - KR
#include <bits/stdc++.h>
using namespace std;

bool dfs(vector<int>V[],int i,int parent,int n,vector<bool>vis){
    vis[i]=true;
    for(auto x:V[i]){
        if(!vis[x]){
            if(dfs(V,x,i,n,vis))return true;
        }
        else if(x!=parent)return true;
    }
    return false;
}

int main(){
    int u,v;
    vector<int>V[5];
    for(int i=0;i<5;i++){
        cin>>u>>v;
        V[u].push_back(v);
        V[v].push_back(u);
    }
    vector<bool>vis(5,false);
    for(int i=0;i<5;i++){
        if(!vis[i]){
            if(dfs(V,i,-1,5,vis)==true){cout<<"HAHHAH";break;}
        }
    }
}

