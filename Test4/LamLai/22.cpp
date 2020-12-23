#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
int a[100005];
int tim(int a[], int l, int r, int k){
    int mid=(l+r)/2;
    if(l>r)    return -1;
    if(a[mid]==k)   return mid;
    else if(a[mid]<k)    return tim(a,mid+1,r,k);
    else    return tim(a,l,mid-1,k);
}
void Solve(){
    int n,k;
    cin>>n>>k;
    for(int i=1;i<=n;i++)   cin>>a[i];
    if(tim(a,1,n,k)==-1)
        cout<<"NO"<<endl;
    else    cout<<tim(a,1,n,k)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
