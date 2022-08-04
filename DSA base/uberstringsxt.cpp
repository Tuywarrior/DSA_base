#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    string s,t;
    cin>>s>>t;
    int k;
    cin>>k;
    int rem=k%2;
    int m=s.length();
    int n=t.length();
    int curr=0;
    int des=0;
    int i=0;
    while(curr<k){
        if(i%2==1)curr+=n*i;
        else curr+=m*i;
        if(curr>=k){
            int diff=curr-k;
            if(i%2==1){
                diff=diff%n;
                cout<<s[diff];break;
            }
            else{
                diff=diff%m;
                cout<<t[diff];break;
            }
        }
        i++;
        
    }
}
