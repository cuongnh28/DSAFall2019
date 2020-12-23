#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve(){
    int n,a[105],s[105],res=INT_MIN;  cin>>n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    s[1]=a[1];
    for(int i=2;i<=n;i++){
        s[i]=max(s[i-1]+a[i],a[i]);
        res=max(res,s[i]);
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
