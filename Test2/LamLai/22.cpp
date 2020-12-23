#include<bits/stdc++.h>
using namespace std;
int a[15][15],n;
string s;
void Try(int i, int j){
    if(i==n && j==n){
        cout<<s<<" ";
        return;
    }
    if(a[i+1][j]==1){
        s+='D';
        Try(i+1,j);
        s.erase(s.end()-1);
    }
    if(a[i][j+1]==1){
        s+='R';
        Try(i,j+1);
        s.erase(s.end()-1);
    }
}
void Solve(){
    s="";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    Try(1,1);
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
