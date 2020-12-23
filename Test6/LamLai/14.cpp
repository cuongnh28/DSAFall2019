#include<bits/stdc++.h>
using namespace std;
bool ngto[1000005];
void Init(){
    memset(ngto,true,sizeof(ngto));
    ngto[0]=ngto[1]=false;
    for(int i=2;i<=sqrt(1000000);i++){
        if(ngto[i]){
            for(int j=i+i;j<=1000000;j+=i){
                ngto[j]=false;
            }
        }
    }
}
void Solve(){
    int n,kt=0;  cin>>n;
    for(int i=0;i<=n;i++){
        if(ngto[i] && ngto[n-i]){
            cout<<i<<" "<<n-i<<endl;
            kt=1;
            break;
        }
    }
    if(!kt) cout<<-1<<endl;
}
int main(){
    int t;  cin>>t;
    Init();
    while(t--){
        Solve();
    }
}
