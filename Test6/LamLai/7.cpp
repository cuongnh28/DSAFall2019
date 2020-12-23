#include<bits/stdc++.h>
using namespace std;
int a[1000005],b[1000005],n,r,l;
void Solve(){
    bool kt=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            kt=true;
            l=i;
            break;
        }
    }
    if(!kt)    return;
    for(int i=n-1;i>=0;i--){
        if(a[i]!=b[i]){
            r=i;
            break;
        }
    }
    cout<<l+1<<" "<<r+1<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
}
