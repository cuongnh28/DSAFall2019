#include<bits/stdc++.h>
using namespace std;
int n,k,a[40];
bool ok[40];
void Solve(){
    cin>>n>>k;
    for(int i=0;i<=40;i++)  ok[i]=0;
    for(int i=1;i<=k;i++){
        cin>>a[i];
        ok[a[i]]=1;
    }
    int i=k;
    while(a[i]==n-k+i)  i--;
    if(i==0)    cout<<k<<endl;
    else{
        a[i]+=1;
        ok[a[i]]=0;
        for(int j=i+1;j<=k;j++){
            a[j]=a[j-1]+1;
        }
        for(int i=1;i<=k;i++)
            ok[a[i]]=0;
        int res=0;
        for(int i=1;i<=45;i++){
            if(ok[i])   res++;
        }
        cout<<res<<endl;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
