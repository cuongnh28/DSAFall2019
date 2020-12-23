#include<bits/stdc++.h>
using namespace std;
int a[10005],n;
struct Tanxuat{
    int giatri,solan;
};
bool cmp(Tanxuat a, Tanxuat b){
    return (a.solan>b.solan || (a.solan==b.solan && a.giatri<b.giatri));
}
void Solve(){
    Tanxuat x[1005];
    for(int i=0;i<n;i++){
        x[i].solan=0;
    }
    int cnt=0,i;
    x[cnt].giatri=a[0];
    x[cnt].solan=1;
    for(i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            cnt++;
            x[cnt].giatri=a[i];
            x[cnt].solan=1;
        }
        else{
            x[cnt].solan+=1;
        }
    }
    sort(x,x+cnt+1,cmp);
    for(i=0;i<=cnt;i++){
        for(int j=0;j<x[i].solan;j++){
            cout<<x[i].giatri<<" ";
        }
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        sort(a,a+n);
        Solve();
    }
}

