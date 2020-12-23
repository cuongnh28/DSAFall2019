#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void Merge(int a[], int l, int m, int r){
    int n1=m-l+1,
        n2=r-m,
        i,j,k;
    int A[n1],B[n2];
    for(i=0;i<n1;i++)
        A[i]=a[i+l];
    for(j=0;j<n2;j++)
        B[j]=a[j+m+1];
    i=j=0;
    k=l;
    while(i<n1 && j<n2){
        if(A[i]<B[j]){
            a[k]=A[i];
            i++;
        }
        else{
            a[k]=B[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=A[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=B[j];
        j++;
        k++;
    }
}
void MergeSort(int a[], int l, int r){
    if(l<r){
        int mid=l+(r-l)/2;
        MergeSort(a,l,mid);
        MergeSort(a,mid+1,r);
        Merge(a,l,mid,r);
    }
}
void Solve(){
    int n;  cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    MergeSort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
