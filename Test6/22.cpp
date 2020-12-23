#include<bits/stdc++.h>
using namespace std;
int n,x,a[1000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>x;
        for(int i=0;i<n;i++)   cin>>a[i];
        if(binary_search(a,a+n,x))  cout<<1<<endl;
        else    cout<<-1<<endl;
    }
}
