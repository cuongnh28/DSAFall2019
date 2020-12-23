#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
ll c[1005][1005];
void Tinh(){
    c[0][0]=1;
    for(int i=1;i<=1000;i++){
        for(int k=0;k<=i;k++){
            c[i][k]=1;
            for(int j=i;j>=i-k+1;j--){
                c[i][k]=c[i][k]*j%M;
            }
        }
    }
}
int main(){
    Tinh();
    int t,n,k;  cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>n){
            cout<<0<<endl;
            continue;
        }
        cout<<c[n][k]<<endl;
    }
}
