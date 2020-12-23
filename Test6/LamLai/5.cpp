#include<bits/stdc++.h>
using namespace std;
int a[100005],b[100005],U[100005],I[100005],m,n;
void Solve(){
    int i,j,k,l;
    cin>>m>>n;
    for(i=0;i<m;i++)    cin>>a[i];
    for(j=0;j<n;j++)    cin>>b[j];
    sort(a,a+m);
    sort(b,b+n);
    i=j=k=l=0;
    while(i<m && j<n){
        if(a[i]==b[j]){
            U[k]=I[l]=a[i];
            k++;
            l++;
            i++;
            j++;
        }
        else if(a[i]<b[j]){
            U[k]=a[i];
            i++;
            k++;
        }
        else{
            U[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<m){
        U[k]=a[i];
        i++;
        k++;
    }
    while(j<n){
        U[k]=b[j];
        j++;
        k++;
    }
    for(i=0;i<k;i++)
        cout<<U[i]<<" ";
    cout<<endl;
    for(i=0;i<l;i++)
        cout<<I[i]<<" ";
    cout<<endl;
}
int main(){
    int t; cin>>t;
    while(t--){
        Solve();
    }
}
