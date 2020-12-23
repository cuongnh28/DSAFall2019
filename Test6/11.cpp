#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
int tim(){
    int res=INT_MAX;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int s=a[i]+a[j];
            if( abs(res)>abs(s) ){
                res=s;
            }
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        cout<<tim()<<endl;
    }
    return 0;
}
