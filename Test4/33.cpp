#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int p = 1e9+7;
ll dao(ll n){
    ll r=0;
    while(n>0){
        r=r*10+n%10;
        n/=10;
    }
    return r;
}
ll power(ll n, ll r){
    if(r==1)    return n%p;
    ll x=(power(n,r/2));
    if(r%2==0)  return x*x%p;
    return n*(x*x%p)%p;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll r=dao(n);
        cout<<power(n,r)<<endl;
    }
    return 0;
}
