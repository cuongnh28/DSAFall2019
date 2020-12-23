#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int m,n,p;
    string s1,s2,s3;
    cin>>m>>n>>p>>s1>>s2>>s3;
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    s3 = ' ' + s3;
    int c[m+5][n+5][p+5];
    memset(c,0,sizeof(c));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=p;k++){
                if(s1[i]==s2[j] && s2[j]==s3[k]){
                    c[i][j][k]=c[i-1][j-1][k-1]+1;
                }
                else{
                    c[i][j][k]=max(c[i-1][j][k],max(c[i][j-1][k],c[i][j][k-1]));
                }
            }
        }
    }
    cout<<c[m][n][p]<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
