#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void Merge(int a[], int l, int mid, int r){
    int m=mid-l+1,
        n=r-mid,
        i,j,k;
    int R[n],L[m];
    for(i=0;i<m;i++){
        L[i]=a[i+l];
    }
    for(j=0;j<n;j++){
        R[j]=a[mid+1+j];
    }
    i=j=0;
    k=l;
    while(i<m && j<n){
        if( L[i] < R[j] ){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<m){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n){
        a[k]=R[j];
        j++;
        k++;
    }
}
void MSort(int a[], int l, int r){
    if(r>l){
        int mid = l+(r-l)/2;
        MSort(a,l,mid);
        MSort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        MSort(a,0,n-1);
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
}

