#include<bits/stdc++.h>
using namespace std;
int tim(int a[], int l, int r){
    if(a[r]==0) return r;
    if(a[r]==1 && a[l]==0 && r-l==1)    return l;
    int mid=(r+l)/2;
    if(a[mid]==0)   return tim(a,mid,r);
    else    return tim(a,l,mid-1);
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
