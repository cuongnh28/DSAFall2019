#include<bits/stdc++.h>
using namespace std;
int a[1005],n,k;
void Solve(){
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int res=0;
    for(int i=0;i<n-1;i++){
        //if(a[i]>k)  break;
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==k)
                res++;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
