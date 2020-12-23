#include<bits/stdc++.h>
using namespace std;
long long c[30][30];
void tinh(){
    for(int i=0;i<=25;i++)  c[i][0]=1;
    for(int j=0;j<=25;j++)  c[0][j]=1;
    for(int i=1;i<=25;i++){
        for(int j=1;j<=25;j++){
            c[i][j] = c[i-1][j] + c[i][j-1];
        }
    }
}
int main(){
    tinh();
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<c[n][m]<<endl;
    }
    return 0;
}
