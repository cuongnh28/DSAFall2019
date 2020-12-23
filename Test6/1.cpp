#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        int a[1005];
        cin>>n;
        for(int i=1;i<=n;i++)   cin>>a[i];
        sort(a+1,a+n+1,greater<int>());
        for(int i=1;i<=n/2;i++)
            cout<<a[i]<<" "<<a[n-i+1]<<" ";
        if(n%2==1)  cout<<a[n/2+1];
        cout<<endl;
    }
}
