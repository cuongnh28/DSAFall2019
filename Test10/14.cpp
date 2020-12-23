#include<bits/stdc++.h>
using namespace std;
#define ii pair<int,int>
int m,n,s,w,res[1005],parent[1005];
vector<ii> ds[1005];
priority_queue< ii, vector<ii>, greater<ii> > q;
void Init(){
    cin>>m>>n>>s;
    for(int i=1;i<=m;i++){
        ds[i].clear();
        res[i]=INT_MAX; //gan cac khoang cach la max.
        parent[i]=-1;
    }
    for(int i=1,x,y;i<=n;i++){
        cin>>x>>y>>w;
        ds[x].push_back(ii(w,y));
        ds[y].push_back(ii(w,x));
    }

}
void Solve(){
    while(!q.empty())   q.pop();
    q.push(ii(0,s));    //s la dinh bat dau va co gia tri 0.
    res[s]=0;   //res la ket qua.
    while(!q.empty()){
        int u=q.top().second;   q.pop();    //second la dinh, first la trong so(khoang cach).
        for(int i=0;i<ds[u].size();i++){
            int v=ds[u][i].second, d_u_v=ds[u][i].first;
            if(res[u]+d_u_v < res[v]){
                res[v]=res[u]+d_u_v;
                q.push(ii(res[v],v));
                parent[v]=u;
            }
        }
    }
    for(int i=1;i<=m;i++)
        cout<<res[i]<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        Solve();
    }
}
