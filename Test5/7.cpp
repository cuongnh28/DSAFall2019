#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
ll tinh(int n, int k){
    ll dp[100005];
    dp[0]=dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=min(i,k);j++){
            dp[i]=(dp[i]+dp[i-j])%M;
        }
    }
    return dp[n];
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<tinh(n,k)<<endl;
    }
}
