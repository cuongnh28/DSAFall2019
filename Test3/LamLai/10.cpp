#include<bits/stdc++.h>
using namespace std;
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
        tmp=x+y;
        res+=tmp;
        pq.push(tmp);
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
