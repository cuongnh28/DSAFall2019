#include<bits/stdc++.h>
using namespace std;
int tim(int a[], int l, int r){
    if(a[r]==0) return r;
    if(a[l]==0 && a[r]==1 && r-l==1)    return l; // 0 0 0 1 1
    int m=(r+l)/2;
    if(a[m]==0) return tim(a,m,r);
    return tim(a,l,m-1);
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[1001];
        for(int i=0;i<n;i++)    cin>>a[i];
        if(a[0]==1) cout<<0<<endl;
        else{
            int x=tim(a,0,n-1);
            cout<<x+1<<endl;
        }
    }
    return 0;
}
