#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    string a,b;
    cin>>k>>a>>b;
    while(a.size()<b.size())  a='0'+a;
    while(b.size()<a.size())  b='0'+b;
    int s, n=0, i=a.size()-1;
    string str=""; char c;
    while(i>=0){
        s=(a[i]-'0')+(b[i]-'0')+n;
        if(s>=k){
            n=1; //n la 1 neu a[i] + b[i] >= k
            c=(s-k)+'0';
            str=c+str;
        }
        else{
            n=0;
            c=s+'0';
            str=c+str;
        }
        i--;
    }
    if(n>0) str='1'+str;
    cout<<str;
    return 0;
}
