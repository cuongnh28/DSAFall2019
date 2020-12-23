#include<bits/stdc++.h>
using namespace std;
int m,n,s,e;
vector< vector<int> > ds;
bool chuaxet[1005];
void Init(){
    ds.clear();
    int a,b;
    cin>>m>>n;
    ds.resize(m+5);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds.at(a).push_back(b);
        ds.at(b).push_back(a);
    }
}
void BFS(){
    //dat cac dinh deu chua xet den.
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
    }
    queue<int> q;
    q.push(s);
    chuaxet[s]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<ds.at(x).size();i++){
            if(chuaxet[ds.at(x).at(i)]){
                chuaxet[ds.at(x).at(i)]=false;
                q.push(ds.at(x).at(i));
            }
        }
    }
}
bool kt(){
    if(chuaxet[e])  return false;
    return true;
}
int main(){
    int t,k;  cin>>t;
    while(t--){
        Init();
        cin>>k;
        while(k--){
            cin>>s>>e;
            BFS();
            if(kt()){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
    }
}
