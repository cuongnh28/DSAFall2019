#include<bits/stdc++.h>
using namespace std;
long long qhd(int a[], int n){
    long long s[100005];
    s[1]=a[1];
    s[2]=max(a[1],a[2]);
    for(int i=3;i<=n;i++){
        s[i]=max(s[i-1],s[i-2]+a[i]);
    }
    return s[n];
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int a[100005];
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cout<<qhd(a,n)<<endl;
    }
    return 0;
}
