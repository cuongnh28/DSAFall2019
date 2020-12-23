#include<bits/stdc++.h>
using namespace std;
int m,n;
bool vis[1005]; //mang chua xet.
vector< vector<int> > ds; //ds canh.
void Init(){
    int a,b;
    ds.clear();
    cin>>m>>n;
    ds.resize(m+1);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds.at(a).push_back(b);
    }
}
void ReInit(){
    for(int i=1;i<=m;i++) //khoi tao mang chua xet.
        vis[i]=false;
}
int BFS(int u){
    int cnt=1;
    queue<int> q;
    q.push(u);
    vis[u]=true;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds.at(x).size();i++){
            if(!vis[ds.at(x)[i]]){
                vis[ds.at(x)[i]]=true;
                cnt++;
                q.push(ds.at(x)[i]);
            }
        }
    }
    return cnt;
}
bool kt(){
    for(int i=1;i<=m;i++){
        ReInit();
        int a=BFS(i);
        if(a!=m)
            return false;
    }
    return true;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        /*for(int i=1;i<=m;i++)
        {
            ReInit();
            cout<<BFS(i)<<" ";
        }*/
        if(kt())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}

