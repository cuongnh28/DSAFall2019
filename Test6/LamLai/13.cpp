#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,x,a[1005],res=0;
    cin>>n>>x;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==x)
            res++;
    }
    if(res==0)  cout<<-1<<endl;
    else cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
