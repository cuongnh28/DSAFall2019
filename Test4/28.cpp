#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[100001],cnt=0,k=n-1;
        for(int i=0;i<n;i++)
            cin>>a[i];
        sort(a,a+n);
        for(int i=n/2-1;i>=0;i--){
            if(2*a[i]<=a[k]){
                k--;
                cnt++;
            }
        }
        cout<<n-cnt<<endl;
    }
}
