#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],c[1000005];
void Solve(){
    int m,n,k,i,j,l,s;
    cin>>m>>n>>k;
    for(int i=0;i<m;i++)    cin>>a[i];
    for(int j=0;j<n;j++)    cin>>b[j];
    s=m+n;
    i=j=l=0;
    while(i<m && j<n){
        if(a[i]<b[j]){
            c[l]=a[i];
            i++;
        }
        else{
            c[l]=b[j];
            j++;
        }
        l++;
    }
    while(i<m){
        c[l]=a[i];
        i++;
        l++;
    }
    while(j<n){
        c[l]=b[j];
        j++;
        l++;
    }
    cout<<c[k-1]<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
}
