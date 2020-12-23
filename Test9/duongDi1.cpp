#include<bits/stdc++.h>
using namespace std;
int m[1001][1001];
int n;
bool chuaxet[1001];
int truoc[1001];
void Init(){
    cin>>n;
    for(int i=1;i<=n;i++){
        truoc[i]=0;
        chuaxet[i]=true;
        for(int j=1;j<=n;j++)
            cin>>m[i][j];
    }
}
void DFS(int s){
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    while(!st.empty()){
        s=st.top();
        st.pop();
        for(int t=1;t<=n;t++){
            if(chuaxet[t] && m[s][t]!=0){
                chuaxet[t]=false;
                st.push(s);
                st.push(t);
                truoc[t]=s;
                break;
            }
        }
    }
}
void DuongDi(int s, int e){
    if(truoc[e]==0)
        cout<<"Khong co duong"<<endl;
    else{
        cout<<e<<"<-";
        int u;
        u=truoc[e];
        while(u!=s){
            cout<<u<<"<-";
            u=truoc[u];
        }
        cout<<u<<endl;
    }
}
int main(){
    Init();
    int s,e;
    cin>>s>>e;
    DFS(s);
    DuongDi(s,e);
}
