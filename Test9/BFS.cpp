#include<bits/stdc++.h>
using namespace std;
int m[1001][1001];
int n;
bool chuaxet[1001];
void Init(){
    cin>>n;
    for(int i=1;i<=n;i++){
        chuaxet[i]=true;
        for(int j=1;j<=n;j++)
            cin>>m[i][j];
    }
}
void BFS(int s){
    queue<int> q;
    cout<<s<<" ";
    q.push(s);
    chuaxet[s]=false;
    while(!q.empty()){
        s=q.front();
        q.pop();
        for(int t=1;t<=n;t++){
            if(chuaxet[t] && m[s][t]!=0){
                cout<<t<<" ";
                chuaxet[t]=false;
                q.push(t);
            }
        }
    }
}
int main(){
    Init();
    int s;
    cin>>s;
    BFS(s);
}

