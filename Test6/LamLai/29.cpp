#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0,a[105];
    bool kt;
    cin>>n;
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++){
        kt=false;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                kt=true;
            }
        }
        if(kt){
            cnt++;
            cout<<"Buoc "<<cnt<<": ";
            for(int k=0;k<n;k++){
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
    }
}

