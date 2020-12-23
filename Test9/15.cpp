#include<bits/stdc++.h>
using namespace std;
int m,n;
bool chuaxet[1005];
vector< int > ds[1005];
void Init(){
    int a,b;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        ds[i].clear();
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
}
void DFS(int u){
    chuaxet[u]=false;
    for(int i=0;i<ds[u].size();i++){
        if(chuaxet[ds[u].at(i)]){
            DFS(ds[u].at(i));
        }
    }
}
int TPLT(){
    int sl=0;
    for(int i=1;i<=m;i++){
        if(chuaxet[i]){
            sl++;
            DFS(i);
        }
    }
    return sl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        cout<<TPLT()<<endl;
    }
}
