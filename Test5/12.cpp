#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
long long c[1005][1005];
void tinh(){
    c[0][0]=1;
    for(int n=1;n<=1000;n++){
        for(int k=0;k<=n;k++){
            c[n][k]=1;
            for(int j=n;j>=n-k+1;j--){
                c[n][k]=c[n][k]*j%M;
            }
        }
    }
}
int main(){
    int t,n,k;
    tinh();
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(k>n) {
            cout<<0<<endl;
            continue;
        }
        cout<<c[n][k]<<endl;
    }
    return 0;
}

