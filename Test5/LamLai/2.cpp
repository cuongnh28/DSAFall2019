#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int a[1005],c[1005],n,
    res=0;
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    memset(c,0,sizeof(c));
    c[1]=1;
    for(int i=2;i<=n;i++){
        c[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                c[i]=max(c[i],c[j]+1);
            }
        }
        res=max(res,c[i]);
    }
    cout<<res;
}
int main(){
    Solve();
    return 0;
}
