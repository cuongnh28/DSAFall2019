#include<bits/stdc++.h>
using namespace std;
int n,Ngto[1000005];
bool checkNgto[1000005];
void Solve(){
    checkNgto[0]=checkNgto[1]=false;
    for(int i=2;i<=n;i++){
        checkNgto[i]=true;
    }
    for(int i=2;i<=sqrt(n);i++){
        if(checkNgto[i]){
            for(int j=i*2;j<=n;j+=i){
                checkNgto[j]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(checkNgto[i] &&checkNgto[n-i]){
            cout<<i<<" "<<n-i<<endl;
            return;
        }
    }
    cout<<-1<<endl;
}
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        Solve();
    }
}
