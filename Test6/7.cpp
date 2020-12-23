#include<bits/stdc++.h>
using namespace std;
int n,a[10000005],b[10000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        bool kt=false;
        int S,E;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                kt=true;
                S=i;
                break;
            }
        }
        if(!kt)  continue;
        for(int j=n-1;j>=0;j--){
            if(a[j]!=b[j]){
                E=j;
                break;
            }
        }
        cout<<S+1<<" "<<E+1<<endl;
    }
}

