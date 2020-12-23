#include<bits/stdc++.h>
using namespace std;
int m,n;
bool chuaxet[1005];
vector<int> ds[1005];
void Init(){
    //ds.clear();
    int a,b;
    cin>>m>>n;
    //ds.resize(m+1);
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    chuaxet[u]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds[x].size();i++){
            if(chuaxet[ds[x][i]]){
                chuaxet[ds[x][i]]=false;
                q.push(ds[x][i]);
            }
        }
    }
}
int TPLT(){
    int sl=0;
    for(int i=1;i<=m;i++){
        if(chuaxet[i]){
            sl++;
            BFS(i);
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
