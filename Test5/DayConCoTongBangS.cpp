#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[100],s,n,
    l[s+1]={0}, //l la mang, neu ton tai i phan tu co tong bang t thi l[i]=1, nguoc lai.
    l[0]=1,
    ok=0;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++){
        for(int t=s;t>=a[i];t--){
            if(l[t-a[i]]==1){
                l[t]=1;
            }
        }
    }
    cout<<l[s];
}
