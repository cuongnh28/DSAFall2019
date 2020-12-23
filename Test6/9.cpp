#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        int a[105],cnt=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++)   cin>>a[i];
        for(int i=1;i<n;i++){
            if(a[i]>k)
                continue;
            for(int j=i+1;j<=n;j++){
                if(a[i]+a[j]==k)
                    cnt++;
            }
        }
        cout<<cnt<<endl;
    }
}
