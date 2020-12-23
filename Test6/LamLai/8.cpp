#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],m,n;
/*int power(int x, int k){
    if(k==0)    return 1;
    int y=power(x,k/2);
    if(k%2==0)  return y*y;
    else    return y*y*x;
}*/
void Solve(){
    cin>>m>>n;
    for(int i=0;i<m;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    int res=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(pow(i,j)>pow(j,i))
                res++;
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
