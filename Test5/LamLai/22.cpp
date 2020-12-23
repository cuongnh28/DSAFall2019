#include<bits/stdc++.h>
using namespace std;
int a[1000005],n;
long long f[1000005];
void Solve(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    f[1]=a[1];
    f[2]=max(a[1],a[2]);
    for(int i=3;i<=n;i++)
        f[i]=max(f[i-1],f[i-2]+a[i]);
    cout<<f[n]<<endl;

}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
