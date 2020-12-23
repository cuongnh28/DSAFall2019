#include<bits/stdc++.h>
using namespace std;
void Solve(){
    set<int> s;
    int n,tmp;
    cin>>n;
    while(n--){
        cin>>tmp;
        while(tmp>0){
            s.insert(tmp%10);
            tmp/=10;
        }
    }
    for(auto it=s.begin(); it!=s.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
