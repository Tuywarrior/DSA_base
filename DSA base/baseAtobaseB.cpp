#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MAX 1000

int val(char c){
    if(c>='0'&&c<='9')return c-'0';
    else return c-'A'+10;
}

int ch1(string s,int a){
    int power=1;
    int sum=0;
    
    for(int i=s.length()-1;i>=0;i--){
        if(val(s[i])>=16)return -1;
        else{
            sum+=val(s[i])*power;
            power=power*a;
        }
    }
    return sum;
}

char reval(int num){
    if(num>=0&&num<=9)return num+'0';
    else return (char)(num-10+'A');
}
string ch2(int base,int num){
    string res="";
    while(num>0){
        res+=reval(num%base);
        num=num/base;
    }
    reverse(res.begin(),res.end());
    return res;
}

void check(string s,int a,int b){
    int num=ch1(s,a);
    cout<<ch2(b,num);
}

int main(){
    string s="10B";
    int a=16;
    int b=10;
    check(s,a,b);
}
