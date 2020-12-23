#include<bits/stdc++.h>
using namespace std;
int a[1005],f[1005],t,n;
int qhd(){
    int res=a[1];
    f[1]=a[1];
    for(int i=2;i<=n;i++){
        f[i]=a[i];
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                f[i]=max(f[i],f[j]+a[i]);
            }
            res=max(res,f[i]);
        }
    }
    return res;
}
int main(){
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)   cin>>a[i];
        cout<<qhd()<<endl;
    }
}
