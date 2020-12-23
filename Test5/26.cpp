#include<bits/stdc++.h>
using namespace std;
int qhd(int c, int n, int w[]){
    vector< vector<int> > res(n+1, vector<int> (c+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=c;j++){
            if(j<w[i])
                res[i][j]=res[i-1][j];
            else
                res[i][j]=max(res[i-1][j], res[i-1][j-w[i]] + w[i]);
        }
    }
    return res[n][c];
}
int main(){
    int n,c,w[101];
    cin>>c>>n;
    for(int i=1;i<=n;i++)   cin>>w[i];
    cout<<qhd(c,n,w);
    return 0;
}
