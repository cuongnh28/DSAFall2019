#include<bits/stdc++.h>
using namespace std;
int a[1005],n,res;
void Solve(){
    cin>>n;
    res=0;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n-1;i++){
        int tmp=i;
        for(int j=i+1;j<n;j++){
            if(a[tmp]>a[j]){
                tmp=j;
            }
        }
        if(tmp!=i){
            res++;
            swap(a[i],a[tmp]);
        }
    }
    cout<<res<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
}
