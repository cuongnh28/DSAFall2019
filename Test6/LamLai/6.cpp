#include<bits/stdc++.h>
using namespace std;
int a[1000005],n;
void Solve(){
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
}
