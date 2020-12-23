#include<bits/stdc++.h>
using namespace std;
vector<int> res;
int kt,x,n,a[25];
void Try(int i, int y){
    if(y<0) return;
    if(y==0){
        kt=1;
        cout<<'[';
        for(int j=0;j<res.size()-1;j++)
            cout<<res[j]<<" ";
        cout<<res[res.size()-1]<<']'<<" ";
        return;
    }
    for(int j=1;j<=n;j++){
        if(y-a[j]>=0){
            res.push_back(a[j]);
            Try(j,y-a[j]);
            res.pop_back();
        }
    }
}
void Solve(){
    res.clear();
    kt=0;
    cin>>n>>x;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    Try(1,x);
    if(!kt) cout<<-1;
    cout<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		Solve();
	}
	return 0;
}
