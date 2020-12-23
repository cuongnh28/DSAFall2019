#include<bits/stdc++.h>
#define ii pair<int,int>
using namespace std;
int m,n; //m la so dinh, n la so canh.
vector< vector<int> > dscanh;
bool chuaxet[1005];
void Init(){
    int a,b;
    dscanh.clear();
    cin>>m>>n;
    dscanh.resize(m+1);
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        dscanh.at(a).push_back(b);
        dscanh.at(b).push_back(a);
    }
}
void ReInit(){
    for(int i=1;i<=m;i++){
        chuaxet[i]=true;
    }
}
void BFS(int s){
    queue<int> q;
    q.push(s);
    chuaxet[s]=false;
    while(!q.empty()){
        int x=q.front();    q.pop();
        for(int i=0;i<dscanh.at(x).size();i++){
            if(chuaxet[dscanh.at(x).at(i)]){
                chuaxet[dscanh.at(x).at(i)]=false;
                q.push(dscanh.at(x).at(i));
            }
        }
    }
}
void duyet(){
    bool check;
    for(int i=1;i<=m;i++){
        for(int j=0;j<dscanh.at(i).size();j++){
            ReInit();
            int x=dscanh.at(i).at(j);
            dscanh.at(i).erase(dscanh.at(i).begin()+j);
            check=false;
            BFS(i);
            for(int k=1;k<=m;k++){
                if(chuaxet[k])  check=true; //neu van con dinh chua xet thi ok.
            }
            if(check && i<x)    cout<<i<<" "<<x<<" "; //chi lay 1 lan i<x ma thoi.
            dscanh.at(i).insert(dscanh.at(i).begin()+j,x);
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    	Init();
    	duyet();
	}
}
