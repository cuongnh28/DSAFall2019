#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
void Solve(){
    vector<int> dscanh[1005];
    int n;  cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>a[i][j];
            if(a[i][j]==1){
                dscanh[i].push_back(j);
                //dscanh[j].push_back(i);
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<dscanh[i].size();j++){
            cout<<dscanh[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int t=1; //cin>>t;
    while(t--)
    {
        Solve();
    }
}
