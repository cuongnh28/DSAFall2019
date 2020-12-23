#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll M=123456789;
ll tim(ll n){
    if(n==0)    return 1;
    if(n==1)    return 2;
    ll x=tim(n/2);
    if(n%2==0)  return x*x%M;
    else    return (2*x%M)*x%M;
}
void Solve(){
    ll n;
    cin>>n;
    cout<<tim(n-1)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
