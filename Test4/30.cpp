#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll p=1e9+7;
void mul(ll f[2][2], ll m[2][2]){
    ll  x=(((f[0][0]%p)*(m[0][0]%p))%p + ((f[0][1]%p)*(m[1][0]%p)))%p,
        y=(((f[0][0]%p)*(m[0][1]%p))%p + ((f[0][1]%p)*(m[1][1]%p)))%p,
        z=(((f[1][0]%p)*(m[0][0]%p))%p + ((f[1][1]%p)*(m[1][0]%p)))%p,
        w=(((f[1][0]%p)*(m[0][1]%p))%p + ((f[1][1]%p)*(m[1][1]%p)))%p;
    f[0][0]=x;
    f[0][1]=y;
    f[1][0]=z;
    f[1][1]=w;
}
void power(ll f[2][2], int n){
    if(n==0 || n==1)    return;
    power(f,n/2);
    mul(f,f);
    if(n%2==1){
        ll m[2][2]={{1,1},{1,0}};
        mul(f,m);
    }
}
ll fib(int n){
    ll f[2][2]={{1,1},{1,0}};
    power(f,n-1);
    return f[0][0];
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fib(n)<<endl;
    }
    return 0;
}

