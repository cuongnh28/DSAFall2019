#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int tim(int a[], int l, int r, int x){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(a[mid]==x)   return mid;
    if(a[mid]<x)    tim(a,mid+1,r,x);
    else    tim(a,l,mid-1,x);
}
void Solve(){
    int n,x;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int res=tim(a,0,n-1,x);
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
