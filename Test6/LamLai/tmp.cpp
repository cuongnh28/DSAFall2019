#include<bits/stdc++.h>
using namespace std;
int a[1005];
void Solve(){
    int n; cin>>n;
    for(int i=0;i<n;i++)   cin>>a[i];
    sort(a,a+n);
    if(n%2!=0){
        for(int i=n-1;i>n/2;i--){
            cout<<a[i]<<" "<<a[n-1-i]<<" ";
        }
        cout<<a[n/2];
    }
    else{
        for(int i=n-1;i>=n/2;i--){
            cout<<a[i]<<" "<<a[n-1-i]<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
