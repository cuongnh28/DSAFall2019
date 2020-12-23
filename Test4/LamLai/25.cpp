#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll F[95];
char tim(int n, ll k){
    if(n==1)    return 'A';
    if(n==2)    return 'B';
    if(k>F[n-2])    return tim(n-1,k-F[n-2]);
    else    return tim(n-2,k);
}
void Solve(){
    int n;  ll k;
    cin>>n>>k;
    cout<<tim(n,k)<<endl;
}
int main(){
    F[1]=1,F[2]=1;
    for(int i=3;i<=92;i++)
        F[i]=F[i-1]+F[i-2];
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
