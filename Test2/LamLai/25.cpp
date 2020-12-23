#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int a[1005],c[1005],n,s=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
    }
    if(s%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    s/=2;
    c[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=a[i];j--){
            if(c[j-a[i]]==1){
                c[j]=1;
            }
        }
    }
    if(c[s]==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
