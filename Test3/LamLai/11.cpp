#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
void Solve(){
    priority_queue<ll, vector<ll>, greater<ll> > pq;
    ll n,tmp,res=0,x,y;  cin>>n;
    while(n--){
        cin>>tmp;
        pq.push(tmp);
    }
    while(pq.size()>1){
        x=pq.top(); pq.pop();
        y=pq.top(); pq.pop();
        tmp=(x+y)%M;
        res=(res+tmp)%M;
        pq.push(tmp);
    }
    cout<<res;
}
int main(){
    Solve();
    return 0;
}
