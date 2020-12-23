#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int a[205],c[40005],n,s;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    memset(c,0,sizeof(c));
    c[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=a[i];j--){
            if(c[j-a[i]]==1)
                c[j]=1;
        }
    }
    if(c[s]==1)    cout<<"YES"<<endl;
    else    cout<<"NO"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
