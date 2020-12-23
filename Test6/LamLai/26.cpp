#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0,a[105];
    bool kt;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n-1;i++){
        kt=false;
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
                kt=true;
            }
        }
        if(kt==true){
            cout<<"Buoc "<<++cnt<<": ";
            for(int i=0;i<n;i++)    cout<<a[i]<<" ";
            cout<<endl;
        }
    }
}
