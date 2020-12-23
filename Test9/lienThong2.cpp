//su dung danh sach canh.
#include<bits/stdc++.h>
using namespace std;
int a[1001],b[1001];
int n,m;
bool chuaxet[1001];
void Init(){
    cin>>n>>m;
    for(int i=1;i<=n;i++)
        chuaxet[i]=true;
    for(int j=1;j<=m;j++)
        cin>>a[j]>>b[j];
}
void DFS(int s){
    int x;
    stack<int> st;
    st.push(s);
    chuaxet[s]=false;
    cout<<s<<" ";
    while(!st.empty()){
        x=st.top();
        st.pop();
        for(int i=1;i<=m;i++){
            if(chuaxet[ b[i] ] && a[i]==x){ //neu dinh top la a[i] va a[j]->b[i] chua xet thi them vao.
                cout<<b[ i ]<<" ";
                st.push(x);
                st.push(b[i]);
                chuaxet[ b[i] ]=false;
                break;
            }
            else if(chuaxet[ a[i] ] && b[i]==x){ //neu dinh top la a[i] va a[j]->b[i] chua xet thi them vao.
                cout<<a[ i ]<<" ";
                st.push(x);
                st.push(a[i]);
                chuaxet[ a[i] ]=false;
                break;
            }
        }
    }
}
int main(){
    Init();
    int s;
    cin>>s;
    DFS(s);
}
