#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a[100001];
        for(int i=1;i<=n;i++)   cin>>a[i];
        int vt=lower_bound(a+1,a+n+1,k) - a;
        if(a[vt]==k)    cout<<vt<<endl;
        else    cout<<-1<<endl;
    }
}
