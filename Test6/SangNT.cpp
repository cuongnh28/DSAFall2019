#include<bits/stdc++.h>
using namespace std;
void sangNT(int n){
    int nt[n+1];
    memset(nt,1,sizeof(nt));
    for(int i=2;i<=sqrt(n);i++){
        if(nt[i]){
            for(int j=i*2;j<=n;j+=i){
                nt[j]=0;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(nt[i])
            cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    sangNT(n);
}
