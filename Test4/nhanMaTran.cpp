#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a[11][11],b[11][11];
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            b[i][j]=0;
            for(int k=0;k<n;k++){
                b[i][j]=b[i][j]+a[i][k]*a[k][j];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}
