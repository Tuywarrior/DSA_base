#include <bits/stdc++.h>
using namespace std;
#define ll long long 

void convert(string s,int b){
    __int128 decimal=0;
    for(int i=0;i<s.length();i++){
        decimal=(decimal*2+s[i]-'0');
    }
    vector<int>V;
    while(decimal>0){
        V.push_back(decimal%6);
        decimal=decimal/6;
    }
    for(int i=V.size()-1;i>=0;i--)cout<<V[i];
}

int main(){
    string n="100111010101111111111111111111111111111111111111111111111111111111111110101010101010101";
    convert(n,6);
}
