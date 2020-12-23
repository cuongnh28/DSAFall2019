#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s1,s2;
    cin>>s1>>s2;
    int m=s1.size(),n=s2.size();
    s1 = ' ' + s1;
    s2 = ' ' + s2;
    int c[m+5][n+5];
    memset(c,0,sizeof(c));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i] == s2[j]){
                c[i][j]=c[i-1][j-1]+1;
            }
            else{
                c[i][j]=max(c[i-1][j],c[i][j-1]);
            }
        }
    }
    cout<<c[m][n]<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
