#include<bits/stdc++.h>
using namespace std;
int n,k,a[25];
bool kt;
vector<int> res;
void Try(int i, int k){
    if(k==0){
        kt=true;
        for(int i=0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        return;
    }
    if(k<0)
        return;
    while(i<=n && k-a[i]>=0){
        res.push_back(a[i]);
        Try(i,k-a[i]);
        i++;
        res.pop_back();
    }
}
void Solve(){
    res.clear();
    kt=false;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    if(k>a[n]){
        cout<<-1<<endl;
        return;
    }
    Try(1,k);
    if(!kt){
        cout<<-1;
    }
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
