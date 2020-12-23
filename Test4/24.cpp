#include<iostream>
using namespace std;
typedef long long ll;
const ll mod=123456789;
ll dem(ll n){
    if(n==0)    return 1;
    if(n==1)    return 2;
    ll x=dem(n/2);
    if(n%2==0)  return x*x%mod;
    return 2*x*x%mod;
}
int main(){
    int t; ll n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<dem(n-1)<<endl;
    }
}
