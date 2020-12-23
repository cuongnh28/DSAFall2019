#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
int a[1005],f[1005],n,k; //f[i] la so cach bieu dien so i tu cach so trong mang a<=i.
int tinh(){
    memset(f,0,sizeof(f));
    int i,j;
    f[0]=1; //f[0] la so luong cach bieu dien so 0 voi cac so nho hon hoac bang 0, co 1 cach.
    for(i=1;i<=k;i++){
        for(j=1;j<=n;j++){
            if(a[j]<=i){
                f[i]=(f[i]+f[i-a[j]])%M;
            }
        }
    }
    return f[k];
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        cout<<tinh()<<endl;
    }
    return 0;
}
