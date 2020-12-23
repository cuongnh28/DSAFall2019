#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[1001],s[1001],e[1001];
    cin>>n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    s[1]=e[1]=1;
    for(int i=2;i<=n;i++){
        if(a[i]<=a[i-1]) e[i]=1;
        else    e[i]=e[i-1]+1;
        s[i]=max(s[i-1],e[i]);
    }
    cout<<s[n];
}
