#include<bits/stdc++.h>
using namespace std;
long long T[55];
void Solve(){
    T[0]=0,
    T[1]=1,
    T[2]=2,
    T[3]=4;
    for(int i=4;i<=50;i++)
        T[i]=T[i-1]+T[i-2]+T[i-3];
}
int main(){
    int t,n;
    Solve();
    cin>>t;
    while(t--){
        cin>>n;
        cout<<T[n]<<endl;
    }
    return 0;
}
