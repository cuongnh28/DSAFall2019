#include<bits/stdc++.h>
using namespace std;
int n,a[15],b[15];
void Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j;
        if(i==n){
            b[1]=a[1];
            for(int i=2;i<=n;i++){
                b[i]=a[i-1]^a[i];
            }
            for(int i=1;i<=n;i++){
                cout<<b[i];
            }
            cout<<" ";
        }
        else    Try(i+1);
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<endl;
    }
    return 0;
}
