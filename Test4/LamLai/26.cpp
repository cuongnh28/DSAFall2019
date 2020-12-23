#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int n;
    string a,b;
    cin>>n>>a>>b;
    while(a.size()<b.size())    a='0'+a;
    while(b.size()<a.size())    b='0'+b;
    int s=0,k=0,i=a.size()-1;
    string res="";  char c;
    while(i>=0){
        s = (a[i]-'0') + (b[i]-'0') + k;
        if(s>=n){
            k=1;
            c=(s-n)+'0';
            res=c+res;
        }
        else{
            k=0;
            c=s+'0';
            res=c+res;
        }
        i--;
    }
    if(k>0) res="1"+res;
    cout<<res;
}
