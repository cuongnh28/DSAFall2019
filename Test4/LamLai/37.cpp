#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++)   cin>>a[i];
        if(k<a[1]){
            cout<<-1<<endl;
            continue;
        }
        int vt=lower_bound(a+1,a+n+1,k) - a;
        if(a[vt]==k)    cout<<vt<<endl;
        else    cout<<vt-1<<endl;
    }
}
