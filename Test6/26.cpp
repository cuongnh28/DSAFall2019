#include<bits/stdc++.h>
using namespace std;
void Sxep(int a[], int n){
    int cnt=0;
    bool kt;
    for(int i=0;i<n-1;i++){
        kt=false;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[i],a[j]);
                kt=true;
            }
        }
        if(kt){
            cout<<"Buoc "<<++cnt<<": ";
            for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
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



