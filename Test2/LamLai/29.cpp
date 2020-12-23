#include<bits/stdc++.h>
using namespace std;
int res,m,n,a[105][105];
void Try(int i, int j){
    if(i==m && j==n){
        res++;
        return;
    }
    if(i<m) Try(i+1,j);
    if(j<n) Try(i,j+1);
}
void Solve(){
    res=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    Try(1,1);
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
