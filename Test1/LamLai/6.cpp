#include<bits/stdc++.h>
using namespace std;
int n,a[15];
bool chuaxet[15];
void Try(int i){
    for(int j=1;j<=n;j++){
        if(chuaxet[j]){
            chuaxet[j]=false;
            a[i]=j;
            if(i==n){
                for(int k=1;k<=n;k++)
                    cout<<a[k];
                cout<<" ";
            }
            else    Try(i+1);
            chuaxet[j]=true;
        }
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)   chuaxet[i]=true;
        Try(1);
        cout<<endl;
    }
    return 0;
}
