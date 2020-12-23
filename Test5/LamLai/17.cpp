#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,t[105],g[105],a[105],res=INT_MIN;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    t[1]=a[1];
    for(int i=2;i<=n;i++){
        t[i]=a[i];
        for(int j=1;j<i;j++){
            if(a[i]>a[j]){
                t[i]=max(t[i],t[j]+a[i]);
            }
        }
    }
    g[n]=a[n];
    for(int i=n-1;i>0;i--){
        g[i]=a[i];
        for(int j=n;j>i;j--){
            if(a[i]>a[j]){
                g[i]=max(g[i],a[i]+g[j]);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(t[i]+g[i]-a[i]>res){
            res=t[i]+g[i]-a[i];
        }
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
