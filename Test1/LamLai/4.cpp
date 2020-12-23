#include<bits/stdc++.h>
using namespace std;
int n;
char a[15];
void Try(int i){
    for(char j='A';j<='B';j++){
        a[i]=j;
        if(i==n){
            for(int k=1;k<=n;k++)
                cout<<a[k];
            cout<<" ";
        }
        else    Try(i+1);
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n;
        Try(1);
        cout<<endl;
    }
    return 0;
}
