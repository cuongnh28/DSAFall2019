#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,a[1005];  cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]>1){
            cnt+=a[i+1]-a[i]-1;
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
