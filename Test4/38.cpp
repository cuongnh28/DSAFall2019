#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,n,h;
    cin>>t;
    while(t--){
        int a[100001],b[100001],c[100001];
        cin>>m>>n>>h;
        for(int i=0;i<m;i++)    cin>>a[i];
        for(int i=0;i<n;i++)    cin>>b[i];
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(a[i]<b[j]){
                c[k]=a[i];
                i++;
            }
            else{
                c[k]=b[j];
                j++;
            }
            k++;
        }
        while(i<m){
            c[k]=a[i];
            i++;    k++;
        }
        while(j<n){
            c[k]=b[j];
            j++;    k++;
        }
        cout<<c[h-1]<<endl;
    }
}
