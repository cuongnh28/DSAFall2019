#include<bits/stdc++.h>
using namespace std;
typedef struct{
    int f;
    int s;
}Pair;
int n,f[105];
Pair p[105];
int tinh(){
    int res=INT_MIN;
    f[1]=1;
    for(int i=2;i<=n;i++){
        f[i]=1;
        for(int j=1;j<i;j++){
            if(p[j].s<p[i].f){
                f[i]=max(f[i],f[j]+1);
            }
        }
        res=max(res,f[i]);
    }
    //cout<<res<<endl;
    return res;
}
bool cmp(Pair a, Pair b){
    return a.f<b.f;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>p[i].f>>p[i].s;
        sort(p+1,p+n+1,cmp);
        cout<<tinh()<<endl;
    }
}
