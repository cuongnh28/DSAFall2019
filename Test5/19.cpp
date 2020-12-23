#include<bits/stdc++.h>
using namespace std;
int t,n,x,y,z;
int qhd(){
    int f[105];
    f[1]=x;
    for(int i=2;i<=n;i++){
        f[i]=0;
        if(i%2==0){
            f[i]=min(f[i-1]+x, f[i/2]+z);
        }
        else{
            f[i]=min( f[i-1]+x, min(f[(i/2)+1]+z+y, f[i/2]+z+x) );
        }
    }
    return f[n];
}
int main(){
    cin>>t;
    while(t--){
        cin>>n>>x>>y>>z;
        cout<<qhd()<<endl;
    }
    return 0;
}
