#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll fib[93];
char tim(int n, ll i){
    if(n==1)    return 'A';
    if(n==2)    return 'B';
    if(i>fib[n-2]) return tim(n-1,i-fib[n-2]); //nam ve f[i-1]
    else    return tim(n-2,i);  //nam ve f[i-2]
}
int main(){
    fib[1]=1,fib[2]=1;
    for(int i=3;i<93;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }
    int t,n;    ll i;
    cin>>t;
    while(t--){
        cin>>n>>i;
        char c=tim(n,i,fib);
        cout<<c<<endl;
    }
}
