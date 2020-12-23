#include<bits/stdc++.h>
using namespace std;
int a[1000005],n;
void Merge(int a[], int l, int mid, int r){
    int m1=mid-l+1,m2=r-mid;
    int A[m1],B[m2],i,j,k;
    for(i=0;i<m1;i++)
        A[i]=a[i+l];
    for(j=0;j<m2;j++)
        B[j]=a[mid+1+j];
    i=j=0,
    k=l;
    while(i<m1 && j<m2){
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
    while(i<m1){
        a[k]=A[i];
        i++;
        k++;
    }
    while(j<m2){
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
    cin>>n;
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
