#include<bits/stdc++.h>
using namespace std;
int n,a[1005];;
void Solve(){
    //1 2 5 7 6
    int i=n-1;
    while(a[i]>a[i+1]) i--;
    if(i==0){
        for(int i=1;i<=n;i++)
            cout<<i<<" ";
        cout<<endl;
    }
    int j=n;
    while(a[j]<a[i])    j--;
    swap(a[i],a[j]);
    int c=i+1,d=n;
    while(c<d){
        swap(a[c],a[d]);
        c++;
        d--;
    }

}
int main(){
    int t;  cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)   cin>>a[i];
        Solve();
    }
    return 0;
}
