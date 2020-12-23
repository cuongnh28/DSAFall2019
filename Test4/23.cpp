#include<bits/stdc++.h>
#define ll long long
using namespace std;
int tim(int n, ll k){
    if(k%2==1)    return 1;
    ll x=pow(2,n-1);
    if(k==x)    return n;
    if(k<x) return tim(n-1,k);
    return tim(n-1,k-x);
}
int main(){
    int t,n;    ll k;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>k;
        int vt=tim(n,k);
        cout<<vt<<endl;
    }
    return 0;
}
