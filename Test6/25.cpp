#include<bits/stdc++.h>
using namespace std;
int n,a[10000005];
void Solve(){
    sort(a,a+n);
    bool kt=false;
    int m=a[0],p;
    for(int i=1;i<n;i++){
        if(a[i]!=m){
            kt=true;
            p=a[i];
            break;
        }
    }
    if(kt){
        cout<<m<<" "<<p;
    }
    else{
        cout<<-1;
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        Solve();
    }
}



