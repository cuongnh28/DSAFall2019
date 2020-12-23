#include<bits/stdc++.h>
using namespace std;
long long a[1000005],b[1000005];
int m,n;
int main(){
    int t;
    cin>>t;
    while(t--){
        int i,j;
        cin>>m>>n;
        for(i=0;i<m;i++)   cin>>a[i];
        for(j=0;j<n;j++)   cin>>b[j];
        sort(a,a+m);
        sort(b,b+n);
        long long x=a[m-1]*b[0];
        cout<<x<<endl;
    }
}
