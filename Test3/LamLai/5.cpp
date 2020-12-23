#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n,a[25];
    long long tmp1,tmp2;
    cin>>n;
    tmp1=tmp2=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int j=0;j<n;j+=2){
        tmp1=tmp1*10+a[j];
    }
    for(int j=1;j<n;j+=2){
        tmp2=tmp2*10+a[j];
    }
    cout<<tmp1+tmp2<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
