#include<bits/stdc++.h>
using namespace std;
void Sxep(int a[], int n){
    bool kt;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        kt=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                kt=true;
                swap(a[j],a[j+1]);
            }
        }
        if(kt){
            cnt++;
            cout<<"Buoc "<<cnt<<": ";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int n,a[105];
    cin>>n;
    for(int i=0;i<n;i++)   cin>>a[i];
    Sxep(a,n);
}

