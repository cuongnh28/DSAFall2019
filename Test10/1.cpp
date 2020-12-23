#include<bits/stdc++.h>
using namespace std;
int m,n,d;
vector<int> ds[20];
bool chuaxet[20];
int color[20];
void Init(){
    cin>>m>>n>>d;
    for(int i=1;i<=m;i++){
        ds[i].clear();
        color[i]=0;
    }
    int x,y;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        ds[x].push_back(y);
        ds[y].push_back(x);
    }
}
bool check(int u, int c){
    for(int i=0;i<ds[u].size();i++)
        if(c==color[ds[u][i]]) return false;
    return true;
}
bool Try(int u){
    if(u==m+1)  return true;
    for(int c=1;c<=d;c++){
        if(check(u,c)){
            color[u]=c;
            if(Try(u+1))    return true;
            color[u]=0;
        }
    }
    return false;
}
bool Solve(){
    if(Try(1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        Solve();
    }
}
