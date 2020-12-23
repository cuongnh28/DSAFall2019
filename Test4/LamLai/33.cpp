#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int M=1e9+7;
ll luyThua(ll n, ll r){
    if(r==1)    return n%M;
    ll x=luyThua(n,r/2);
    if(r%2==0)  return x*x%M;
    else    return (x*x%M)*n%M;
}
void Solve(){
    ll n,r=0,tmp;
    cin>>n;
    tmp=n;
    while(tmp>0){
        r=r*10+tmp%10;
        tmp/=10;
    }
    cout<<luyThua(n,r)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
