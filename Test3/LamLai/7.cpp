#include<bits/stdc++.h>
using namespace std;
void Solve(){
    priority_queue<int> pq1;
    priority_queue< int, vector<int>, greater<int> > pq2;
    int n,m,tmp;
    long long res=0;
    cin>>n;
    m=n;
    while(m--){
        cin>>tmp;
        pq1.push(tmp);
    }
    while(n--){
        cin>>tmp;
        pq2.push(tmp);
    }
    while(!pq1.empty()){
        res+=pq1.top()*pq2.top();
        pq1.pop();  pq2.pop();
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
