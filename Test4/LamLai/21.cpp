#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long luyThua(int n, int k){
    if(k==0)    return 1;
    long long y=luyThua(n,k/2);
    if(k%2==1)  return (n*y%M)*y%M;
    else    return y*y%M;
}
void Solve(){
    int n,k;
    cin>>n>>k;
    cout<<luyThua(n,k)<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
