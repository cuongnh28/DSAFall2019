#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,a[55],b[55],kt=1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i] != b[n-i-1] && a[i] != b[i]){
            kt=0;
            break;
        }
    }
    if(!kt) cout<<"No"<<endl;
    else    cout<<"Yes"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
