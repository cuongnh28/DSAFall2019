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
void DFS(int s){
    cout<<"Thanh phan lien thong "<<s<<": ";
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    cout<<s<<" ";
    while(!st.empty()){
        s=st.top();
        st.pop();
        for(int t=1;t<=n;t++){
            if(chuaxet[t] && m[s][t]!=0){
                chuaxet[t]=false;
                st.push(s);
                st.push(t);
                cout<<t<<" ";
                break;
            }
        }
    }
    cout<<endl;
}
void TPLT(){
    int sl=0;
    for(int i=1;i<=n;i++){
        if(chuaxet[i]){
            sl++;
            DFS(i);
        }
    }
    cout<<sl<<endl;
}
int main(){
    Init();
    //DFS(s);
    TPLT();
}

