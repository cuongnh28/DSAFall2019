#include<bits/stdc++.h>
using namespace std;
struct dta{
    int val,cnt;
};
bool cmp(dta a, dta b){
    if(a.cnt>b.cnt) return true;
    if(a.cnt==b.cnt && a.val<b.val) return true;
    return false;
}
void Solve(){
    int d[10005],n;
    dta a[10005];
    memset(d,0,sizeof(d));
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i].val;
        d[a[i].val]++;
    }
    for(int i=0;i<n;i++){
        a[i].cnt=d[a[i].val];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++)
        cout<<a[i].val<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
