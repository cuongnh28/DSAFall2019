#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll luythua(int n, int k){
    if(k==0)    return 1;
    ll x=luythua(n,k/2);
    if(k%2==0)  return x*x;
    else    return x*x*n;
}
ll qhd(ll s){
    vector<int> a;
    while(s>0){
        a.push_back(s%10);
        s/=10;
    }
    reverse(a.begin(),a.end());
    ll dp[20];
    dp[0]=a[0];
    int n=a.size();
    for(int i=1;i<n;i++){
        dp[i]=dp[i-1];
        ll tp=0;
        for(int j=i;j>=0;j--){
            tp=tp+a[j]*luythua(10,i-j);
            dp[i]=dp[i]+tp;
        }
    }
    return dp[n-1];
}
int main(){
    int t;
    ll s;
    cin>>t;
    while(t--){
        cin>>s;
        cout<<qhd(s)<<endl;
    }
    return 0;
}
