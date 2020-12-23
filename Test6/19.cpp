#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt=0;
        int n,a[1005];
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]>1){
                cnt+=(a[i+1]-a[i]-1);
            }
        }
        cout<<cnt<<endl;
    }
}



