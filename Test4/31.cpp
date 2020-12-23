#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll p=1e9+7;
void mul(ll a[11][11], ll b[11][11], int n){
    ll c[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j] = (c[i][j]%p + ((a[i][k]%p)*(b[k][j]%p)))%p;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j]=c[i][j];
        }
    }
}
void power(ll a[11][11], ll b[11][11],int n, int k){
    if(k==0 || k==1)    return;
    power(a,b,n,k/2);
    mul(a,a,n);
    if(k%2!=0){
        mul(a,b,n);
    }
}
void Solve(int n, int k){
    ll a[11][11];
    ll b[11][11];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            b[i][j]=a[i][j];
        }
    }
    power(a,b,n,k);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        Solve(n,k);
    }
}
