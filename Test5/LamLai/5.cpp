#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long c[1005][1005];
void Tinh(){
    for(int i=0;i<=1000;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || j==i){
                c[i][j]=1;
            }
            else{
                c[i][j]=c[i-1][j-1]+c[i-1][j];
            }
        }
    }
}
int main(){
    int t;  cin>>t;
    Tinh();
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<c[n][k]<<endl;
    }
    return 0;
}
