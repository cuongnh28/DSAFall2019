#include<bits/stdc++.h>
using namespace std;
vector<int> ds[100005];
bool chuaxet[100005];
int m,n,tmp,res;
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
void BFS(int u){
    chuaxet[u]=false;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds[x].size();i++){
            if(chuaxet[ds[x][i]]){
                chuaxet[ds[x][i]]=false;
                q.push(ds[x][i]);
                tmp+=1;
                res=max(res,tmp);
            }
        }
    }
}
int timMax(){
    res=1; //dung BFS, tim so luong lon nhat cua cac dinh di qua.
    for(int i=1;i<=m;i++){
        if(chuaxet[i]){
            tmp=1;
            BFS(i);
        }
    }
    return res;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        cout<<timMax()<<endl;
    }
    return 0;
}
