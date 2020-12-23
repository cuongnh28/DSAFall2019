#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
typedef long long ll;
int f[105][50005]; //f[i][j] la so cac so co i chu so va co tong cac chu so bang j.
ll Tinh(){
    for(int i=0;i<=100;i++) f[i][0]=0;
    for(int i=0;i<=50000;i++)   f[0][i]=0;
    for(int i=1;i<=9;i++)   f[1][i]=1; //so co 1 chu so va co tong toi i.
    for(int i=1;i<=100;i++){
        for(int num=0;num<=9;num++){
            for(int j=num;j<=50000;j++){
                f[i][j]=(f[i][j]+f[i-1][j-num])%M;
            }
        }
    }
}
int main(){
    int t,n,k;
    Tinh();
    cin>>t;
    while(t--){
        cin>>n>>k;
        cout<<f[n][k]<<endl;
    }
}
