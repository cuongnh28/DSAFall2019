#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
ll n,u[1005];
void Tinh(){
    u[0]=1;
    int i1=0,n1=2,
        i2=0,n2=3,
        i3=0,n3=5;
    for(int i=1;i<=1000;i++){
        int tg=min(n1,min(n2,n3));
        u[i]=tg;
        if(tg==n1){
            i1++;
            n1=2*u[i1];
        }
        if(tg==n2){
            i2++;
            n2=3*u[i2];
        }
        if(tg==n3){
            i3++;
            n3=5*u[i3];
        }
    }
}
int main(){
    Tinh();
    int t;  cin>>t;
    while(t--){
        cin>>n;
        cout<<u[n-1]<<endl;
    }
}

