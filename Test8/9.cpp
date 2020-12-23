#include<bits/stdc++.h>
using namespace std;
int Cover(int m, int n){
    if(m==n)    return 0;
    if(m<=0 && n>0) return -1;
    if(m>n) return m-n;
    //Neu n le.
    if(n%2==1)  return Cover(m,n+1)+1;
    //Neu n chan.
    else    return Cover(m,n/2)+1;
}
int main(){
    int t,m,n;
    cin>>t;
    while(t--){
        cin>>m>>n;
        cout<<Cover(m,n)<<endl;
    }
}

