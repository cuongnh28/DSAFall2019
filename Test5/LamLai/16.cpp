#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,c[1005],a[1005],res=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    c[1]=a[1];
    for(int i=2;i<=n;i++){
        c[i]=a[i];
        for(int j=1;j<i;j++){
            if(a[i]>a[j]){
                c[i]=max(c[i],c[j]+a[i]);
            }
        }
        res=max(res,c[i]);
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
