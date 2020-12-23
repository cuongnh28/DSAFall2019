#include<bits/stdc++.h>
using namespace std;
vector<int> ds[100005];
bool chuaxet[100005];
int m,n;
void Init(){
    int a,b;
    cin>>m>>n;
    for(int i=1;i<=m;i++){
        ds[i].clear();
        //chuaxet[i]=true;
    }
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        ds[a].push_back(b);
        ds[b].push_back(a);
    }
}
bool kt(){
    bool ok;

}
int main(){
    int t;  cin>>t;
    while(t--){
        Init();
        if(kt())
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
