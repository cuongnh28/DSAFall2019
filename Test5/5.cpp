#include<bits/stdc++.h>
using namespace std;
const int M =1e9+7;
int n,k;
long long c[1005][1005];
void tinh(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0)
                c[i][j]=1;
            else{
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%M;
            }
        }
    }
}
int main(){
    int t;
    tinh();
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<c[n][k]<<endl;
    }
    return 0;
}
