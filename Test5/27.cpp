#include<bits/stdc++.h>
using namespace std;
int qhd(int a[], int c[], int n, int v){
    vector< vector<int> > res(n+1, vector<int> (v+1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=v;j++){
            if(j<a[i])
                res[i][j]=res[i-1][j];
            else{
                res[i][j]=max(res[i-1][j], res[i-1][j-a[i]] + c[i]);
            }
        }
    }
    return res[n][v];
}
int main(){
    int t,v,n;
    cin>>t;
    while(t--){
        int a[1001],c[1001];
        cin>>n>>v;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        for(int i=1;i<=n;i++)
            cin>>c[i];
        cout<<qhd(a,c,n,v)<<endl;
    }
    return 0;
}
