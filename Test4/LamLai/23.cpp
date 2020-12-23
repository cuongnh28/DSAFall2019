#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll tim(int n, ll k){
    ll x=pow(2,n-1);
    if(k%2==1)  return 1;
    if(x==k)    return n;
    //tim ben phai.
    if(x<k) return tim(n-1,k-x);
    //tim ben trai.
    else    return tim(n-1,k);
}
void Solve(){
    int n;  ll k;
    cin>>n>>k;
    cout<<tim(n,k)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
