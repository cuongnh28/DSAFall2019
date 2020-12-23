#include<bits/stdc++.h>
using namespace std;
int Search(int a[], int k, int l,int r){
    if(l>r) return -1;
    int mid=(l+r)/2;
    if(k==a[mid])   return mid;
    else if(k>a[mid])    return Search(a,k,mid+1,r);
    else   return Search(a,k,l,mid-1);
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        int a[100001];
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int vt=Search(a,k,1,n);
        if(vt==-1)  cout<<"NO"<<endl;
        else    cout<<vt<<endl;
    }
    return 0;
}
