#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int a[51],b[51];
        bool ok=true;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i] && a[i]!=b[n-i-1]){
                ok=false;
                break;
            }
        }
        if(ok)  cout<<"Yes"<<endl;
        else    cout<<"No"<<endl;
    }
}
