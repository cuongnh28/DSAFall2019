#include<bits/stdc++.h>
using namespace std;
int m,n,s,e;
vector< vector<int> > ds;
bool chuaxet[1005];
int truoc[1005]; //mang luu cac gia tri truoc.
void Init(){
    ds.clear();
    int a,b;
    cin>>m>>n>>s>>e;
    ds.resize(m+1);
    //dat cac dinh deu chua xet den.
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
        truoc[i]=0;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds.at(a).push_back(b);
        ds.at(b).push_back(a);
    }
}
void BFS(){
    queue<int> q;
    q.push(s);
    chuaxet[s]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds.at(x).size();i++){
            if(chuaxet[ds.at(x).at(i)]){
                chuaxet[ds.at(x).at(i)]=false;
                truoc[ds.at(x).at(i)]=x;
                q.push(ds.at(x).at(i));
            }
        }
    }
}
void tim(){
    int j=e;
    vector<int> res;
    while(j!=s){
        if(truoc[j]==0){ //neu do thi khong lien thong.
            cout<<-1<<endl;
            return;
        }
        res.push_back(j);
        j=truoc[j]; //lui lai.
    }
    res.push_back(s);
    for(int i=res.size()-1;i>=0;i--){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        BFS();
        tim();
    }
}
