#include<bits/stdc++.h>
using namespace std;
int n,a[1005];;
void Solve(){
    int i=n-1;
    while(a[i+1]<a[i]) i--;
    if(i==0){
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
    }
    else{
        int j=n;
        while(a[j]<a[i])    j--;
        swap(a[j],a[i]);
        int c=i+1,d=n;
        while(c<d){
            swap(a[c],a[d]);
            c++;    d--;
        }
        for(int i=1;i<=n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)   cin>>a[i];
        Solve();
    }
    return 0;
}
