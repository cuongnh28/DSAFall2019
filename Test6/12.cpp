#include<bits/stdc++.h>
using namespace std;
int t,n,k,a[1005];
int main(){
    cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;i++)    cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<k;i++){
            cout<<a[n-1-i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}



