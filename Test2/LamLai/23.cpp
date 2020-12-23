#include<bits/stdc++.h>
using namespace std;
int a[15][15],n;
bool chuaxet[15][15],kt;
string s;
void Try(int i, int j){
    if(i==n && j==n){
        cout<<s<<" ";
        kt=true;
        return;
    }
    else{
        if(a[i+1][j]==1 && chuaxet[i+1][j]){
        s+='D';
        chuaxet[i+1][j]=false;
        Try(i+1,j);
        s.erase(s.end()-1);
        chuaxet[i+1][j]=true;
        }
        if(a[i][j-1]==1 && chuaxet[i][j-1]){
            s+='L';
            chuaxet[i][j-1]=false;
            Try(i,j-1);
            s.erase(s.end()-1);
            chuaxet[i][j-1]=true;
        }
        if(a[i][j+1]==1 && chuaxet[i][j+1]){
            s+='R';
            chuaxet[i][j+1]=false;
            Try(i,j+1);
            s.erase(s.end()-1);
            chuaxet[i][j+1]=true;
        }
        if(a[i-1][j]==1 && chuaxet[i-1][j]){
            s+='U';
            chuaxet[i-1][j]=false;
            Try(i-1,j);
            s.erase(s.end()-1);
            chuaxet[i-1][j]=true;
        }
    }
}
void Solve(){
    s="";
    kt=false;
    memset(chuaxet,true,sizeof(chuaxet));
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)
            cin>>a[i][j];
    }
    if(a[1][1]==0){
        cout<<-1<<endl;
        return;
    }
    chuaxet[1][1]=false;
    Try(1,1);
    if(!kt) cout<<-1;
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
