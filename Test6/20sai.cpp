#include<bits/stdc++.h>
using namespace std;
int dem(int a[], int n, int k){
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if( abs(a[i]-a[j]) < k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main(){
    int t,n,k;
    cin>>t;
    while(t--){
        int a[10005];
        cin>>n>>k;
        for(int i=0;i<n;i++)   cin>>a[i];
        cout<<dem(a,n,k)<<endl;
    }
}

