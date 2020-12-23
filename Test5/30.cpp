#include<bits/stdc++.h>
using namespace std;
int f[10005];
void tinh(){
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=10000;i++){
        f[i]=i;
        for(int j=1;j<=sqrt(i);j++){
            f[i]=min(f[i],f[i-j*j]+1);
        }
    }
}
int main(){
    int t,n;
    tinh();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<f[n]<<endl;
    }
    return 0;
}

