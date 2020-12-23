#include<bits/stdc++.h>
using namespace std;
int res[105][105][105];
int qhd(string s1, string s2, string s3, int m, int n, int p){
    s1=' '+s1;
    s2=' '+s2;
    s3=' '+s3;
    memset(res,0,sizeof(res));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=p;k++){
                if(s1[i]==s2[j] && s2[j]==s3[k]){
                    res[i][j][k]=max(res[i-1][j-1][k-1]+1, res[i][j][k]);
                }
                else{
                    res[i][j][k]=max( max(res[i-1][j][k],res[i][j-1][k]), res[i][j][k-1]);
                }
            }
        }
    }
    return res[m][n][p];
}
int main(){
    int t,m,n,p;
    string s1,s2,s3;
    cin>>t;
    while(t--){
        cin>>m>>n>>p;
        cin>>s1>>s2>>s3;
        cout<<qhd(s1,s2,s3,m,n,p)<<endl;
    }
    return 0;
}
