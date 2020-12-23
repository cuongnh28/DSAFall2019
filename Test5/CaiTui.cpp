#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,W,value[100],weight[100],Res[100][100];
        cin>>n>>W;
        for(int i=1;i<=n;i++)   cin>>value[i];
        for(int i=1;i<=n;i++)   cin>>weight[i];
        for(int i=0;i<=n;i++)   Res[i][0]=0;
        for(int i=0;i<=W;i++)   Res[0][i]=0;
        for(int i=1;i<=n;i++){
            for(int L=1;L<=W;L++){
                if(L<weight[i]){
                    Res[i][L]=Res[i-1][L];
                }
                else{
                    Res[i][L]=max(Res[i-1][L], Res[i-1][L-weight[i]] + value[i]);
                }
            }
        }
        cout<<Res[n][W]<<endl;
    }
}
