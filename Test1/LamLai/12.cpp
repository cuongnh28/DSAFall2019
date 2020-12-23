#include<bits/stdc++.h>
using namespace std;
int n,k,a[20];
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            int cnt=0;
            for(int m=1;m<=n;m++){
                if(a[m]==1) cnt++;
            }
            if(cnt==k){
                for(int m=1;m<=n;m++){
                    cout<<a[m];
                }
                cout<<endl;
            }
        }
        else    Try(i+1);
    }
}
void solve(){
    cin>>n>>k;
    Try(1);
}
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    int t;  cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
