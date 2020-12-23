#include<bits/stdc++.h>
using namespace std;
int n,a[10000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        long long Sum1=(n*(n+1))/2,Sum2=0;
        for(int i=1;i<n;i++){
            cin>>a[i];
            Sum2+=a[i];
        }
        cout<<Sum1-Sum2<<endl;
    }
}
