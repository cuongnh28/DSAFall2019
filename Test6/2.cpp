#include<bits/stdc++.h>
using namespace std;
int t,n,x;
int a[100005];
bool cmp(int i, int j){
    return abs(j-x)>abs(i-x);
}
int main(){
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=1;i<=n;i++)   cin>>a[i];
        sort(a+1,a+n+1,cmp);
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
            cout<<endl;
    }
}
