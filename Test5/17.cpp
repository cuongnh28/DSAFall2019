#include<bits/stdc++.h>
using namespace std;
int qhd(int a[], int n){
    int t[105]; //day con tang dai nhat tinh toi vi tri i.
    t[1]=a[1];
    for(int i=2;i<=n;i++){
        t[i]=a[i];
        for(int j=1;j<i;j++){
            if(a[j]<a[i]){
                t[i]=max(t[i],t[j]+a[i]);
            }
        }
    }
    int g[105]; //day con giam dai nhat tinh toi vi tri i.
    g[n]=a[n];
    for(int i=n-1;i>=1;i--){
        g[i]=a[i];
        for(int j=n;j>i;j--){
            if(a[j]<a[i]){
                g[i]=max(g[i],g[j]+a[i]);
            }
        }
    }
    int m=INT_MIN;
    for(int i=1;i<=n;i++){
        if(t[i]+g[i]-a[i]>m){
            m=t[i]+g[i]-a[i];
        }
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,a[105],vt;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cout<<qhd(a,n)<<endl;
    }
}
