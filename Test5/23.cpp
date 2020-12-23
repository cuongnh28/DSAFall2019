#include<bits/stdc++.h>
using namespace std;
int qhd(int a[], int n){
    int f[1005],res=1;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(a[j]<=a[i]){
                f[i]=max(f[j]+1,f[i]);
            }
        }
        res=max(res,f[i]);
    }
    return res;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[1005];
        for(int i=1;i<=n;i++)   cin>>a[i];
        cout<<n-qhd(a,n)<<endl;
    }
}
