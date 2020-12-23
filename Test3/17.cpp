#include<bits/stdc++.h>
using namespace std;
string str;
int k;
struct TanXuat{
    int solan;
    char kytu;
};
int Search(char c, TanXuat x[], int m){
    for(int i=0;i<=m;i++){
        if(x[i].kytu==c){
            return i;
        }
    }
    return m+1;
}
int lietke(string str, TanXuat x[], int m){
    int n=str.size();
    for(int i=0;i<n;i++){
        int vt=Search(str[i],x,m);
        if(vt<=m)   x[vt].solan++;
        else{
            m=vt;
            x[vt].solan=1;
            x[vt].kytu=str[i];
        }
    }
    return m;
}
void Solve(){
    cin>>k;
    cin>>str;
    priority_queue<int> pq;
    int n=str.size(),m=-1;
    TanXuat x[256];
    m=lietke(str,x,m);
    for(int i=0;i<=m;i++){
        pq.push(x[i].solan);
    }
    if(k>n) return;
    if(k==n)    {
        cout<<0<<endl;
        return;
    }
    while(k>0){
        int tp=pq.top()-1;
        pq.pop();
        pq.push(tp);
        k--;
    }
    int res=0;
    while(pq.size()>0){
        res+=pow(pq.top(),2);
        pq.pop();
    }
    cout<<res<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
}
