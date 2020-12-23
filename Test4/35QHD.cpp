#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[101],s[101],e[101],n;
        cin>>n;
        for(int i=1;i<=n;i++)   cin>>a[i];
        s[1]=e[1]=a[1];
        for(int i=2;i<=n;i++){
            e[i]=max(a[i],a[i]+e[i-1]);
            s[i]=max(s[i-1],e[i]);
        }
        cout<<s[n]<<endl;
    }
    return 0;
}
