#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a>>b;
    int m=a.size(),
        n=b.size();
    vector< vector<int> > c(m+1, vector<int>(n+1, 0));
    a = ' ' + a;
    b = ' ' + b;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(a[i]==b[j]) c[i][j]=c[i-1][j-1]+1;
            else   c[i][j]=max(c[i-1][j],c[i][j-1]);
        }
    }
    cout<<c[m][n];
    return 0;
}

