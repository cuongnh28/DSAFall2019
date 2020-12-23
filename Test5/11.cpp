#include<bits/stdc++.h>
using namespace std;
long long c[105];
void tinh(){
    c[0]=1;
    for(int i=1;i<=100;i++){
        c[i]=0;
        for(int j=0;j<i;j++){
            c[i]+=c[j]*c[i-1-j];
        }
    }
}
int main(){
    int t,n;
    tinh();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<c[n]<<endl;
    }
    return 0;
}
