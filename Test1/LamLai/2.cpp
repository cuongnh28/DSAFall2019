#include<bits/stdc++.h>
using namespace std;
int n,k,a[1005];;
void Solve(){
    int i=k;
    while(a[i]==n-k+i)  i--;
    if(i==0){
        for(int i=1;i<=k;i++)
            cout<<i<<" ";
        cout<<endl;
        return;
    }
    else{
        a[i]+=1;
        for(int j=i;j<k;j++)
            a[j+1]=a[j]+1;
        for(int i=1;i<=k;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n>>k;
        for(int i=1;i<=k;i++)   cin>>a[i];
        Solve();
    }
    return 0;
}
