#include<bits/stdc++.h>
using namespace std;
int qhd(int a[], int n, int s){
    int c[s+1]={0};
    c[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=s;j>=a[i];j--){
            if(c[j-a[i]]==1)
                c[j]=1;
        }
    }
    return c[s];
}
int main(){
    int t,n,s,a[205];
    cin>>t;
    while(t--){
        cin>>n>>s;
        for(int i=1;i<=n;i++)   cin>>a[i];
        if(qhd(a,n,s)==1)  cout<<"YES\n";
        else            cout<<"NO\n";
    }
    return 0;
}
