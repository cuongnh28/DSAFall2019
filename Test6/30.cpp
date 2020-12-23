#include<bits/stdc++.h>
using namespace std;
long long a[1000005];
void Merge(long long a[], int l, int m, int r){
    int n1=m-l+1,
        n2=r-m;
    long long L[n1],R[n2];
    int i,j,k;
    for(i=0;i<n1;i++)
        L[i]=a[l+i];
    for(j=0;j<n2;j++)
        R[j]=a[m+j+1];
    i=j=0,
    k=l;
    while(i<n1 && j<n2){
        if(L[i]<R[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }
}
void MSort(long long a[], int l, int r){
    if(r>l){
        int m=(r+l)/2;
        MSort(a,l,m);
        MSort(a,m+1,r);
        Merge(a,l,m,r);
    }
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)   cin>>a[i];
    MSort(a,0,n-1);
    for(int i=0;i<n;i++)   cout<<a[i]<<" ";
}



