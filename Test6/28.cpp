#include<bits/stdc++.h>
using namespace std;
void Sxep(int a[], int n){
    int cnt=0;
    for(int i=0;i<n;i++){
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
        cout<<"Buoc "<<cnt++<<": ";
        for(int k=0;k<=i;k++){
            cout<<a[k]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n,a[105];
    cin>>n;
    for(int i=0;i<n;i++)   cin>>a[i];
    Sxep(a,n);
}


