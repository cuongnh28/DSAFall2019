#include<bits/stdc++.h>
using namespace std;
int n,k,a[15][15],vis[15],b[15];
vector< vector<int> > res;
void Solve(int i){
    for(int j=1;j<=n;j++){
        if(!vis[j]){
            b[i]=j;
            vis[j]=1;
            if(i==n){
                int Sum=0;
                for(int m=1;m<=n;m++){
                    Sum+=a[m][b[m]];
                }
                if(Sum==k){
                    vector<int> tmp;
                    for(int m=1;m<=n;m++){
                        tmp.push_back(b[m]);
                    }
                    res.push_back(tmp);
                }
            }
            else    Solve(i+1);
            vis[j]=0;
        }
    }
}
int main(){
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    memset(vis,0,sizeof(vis));
    res.clear();
    Solve(1);
    cout<<res.size()<<endl;
    for(int i=0;i<res.size();i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
