#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
int a[505][505],f[505][505],m,n,kq;
void Solve(){
    kq=0;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=m;i++)   f[i][1]=a[i][1];
    for(int i=1;i<=n;i++)   f[1][i]=a[1][i];
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            if(a[i][j]==0)
                f[i][j]=0;
            else{
                f[i][j]=min(f[i-1][j-1], min(f[i-1][j],f[i][j-1]))+1;
            }
            kq=max(kq,f[i][j]);
        }
    }
    cout<<kq<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
