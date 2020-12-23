#include<bits/stdc++.h>
using namespace std;
int m,n; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
void Init(){
    int a,b;
    dscanh.clear();
    cin>>m>>n;
    dscanh.resize(m+5);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh.at(a).push_back(b);
    }
}
void Solve(){
    int cnt=0;
    for(int i=1;i<=m;i++){
        cout<<++cnt<<": ";
        sort(dscanh.at(i).begin(),dscanh.at(i).end());
        for(int j=0;j<dscanh.at(i).size();j++){
            cout<<dscanh.at(i).at(j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Init();
    	Solve();
	}
}
