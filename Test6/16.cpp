#include<bits/stdc++.h>
using namespace std;
int a[1000005];
void QuickSort(int a[], int l, int r){
    int i=l,j=r;
    if(r<=l)    return;
    int p=a[(l+r)/2];
    do{
        while(a[i]<p)   i++;
        while(a[j]>p)   j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<j);
    QuickSort(a,l,j);
    QuickSort(a,i,r);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        QuickSort(a,0,n-1);
        for(int i=0;i<n;i++)   cout<<a[i]<<" ";
        cout<<endl;
    }
}



