#include<bits/stdc++.h>
using namespace std;
int a,n,res,M=1e9+7;
void Solve(){
    res=0;
    priority_queue<int> pq;
    cin>>n;
    while(n--){
        cin>>a;
        pq.push(a);
    }
    while(!pq.empty()){
        res = ( res + (pq.top()*(pq.size()-1)%M) ) % M;
        pq.pop();
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
