#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
int n,f[105][105];
string a;
void Solve(){
    cin>>n>>a;
    a=' ' + a;
    memset(f,0,sizeof(f));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==a[j] && i!=j){
                f[i][j]=f[i-1][j-1]+1;
            }
            else{
                f[i][j]=max(f[i-1][j],f[i][j-1]);
            }
        }
    }
    cout<<f[n][n]<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}

