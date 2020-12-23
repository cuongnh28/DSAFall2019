#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Solve(){
    int a[100005], n, k;
    cin>>n;
    k=n;
    for(int i=1;i<=n;i++)   cin>>a[i];
    sort(a+1,a+n+1);
    int cnt=0;
    for(int i=n/2;i>=1;i--){
        if(a[i]*2<=a[k]){
            cnt++;
            k--;
        }
    }
    cout<<n-cnt<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
