#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int s,f;
};
Pair p[1005];
int cmp(Pair a, Pair b){
    return a.f<b.f;
}
void Solve(){
    int n;  cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].s;
    }
    for(int i=0;i<n;i++){
        cin>>p[i].f;
    }
    sort(p,p+n,cmp);
    int res=1,j=0;
    for(int i=1;i<n;i++){
        if(p[i].s>=p[j].f){
            res++;
            j=i;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
