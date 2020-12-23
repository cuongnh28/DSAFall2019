#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
int a[1005][1005],f[1005][1005],m,n;
void Solve(){
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    f[1][1]=a[1][1];
    for(int i=2;i<=m;i++)
        f[i][1]=f[i-1][1]+a[i][1];
    for(int i=2;i<=n;i++)
        f[1][i]=f[1][i-1]+a[1][i];
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            f[i][j]=min(f[i-1][j-1], min(f[i-1][j],f[i][j-1]))+a[i][j];
        }
    }
    cout<<f[m][n]<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
