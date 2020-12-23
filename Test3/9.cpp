#include<bits/stdc++.h>
using namespace std;
struct JOB{
    int id;
    int deadline;
    int profit;
};
bool cmp(JOB a, JOB b){
    return (a.profit>b.profit); //sap xep giam dan theo profit.
}
void Solve(){
    int n;
    cin>>n;
    bool vis[1001];
    int cnt=0,Sum=0,res[1001];
    JOB job[1001];
    for(int i=0;i<n;i++){
        cin>>job[i].id>>job[i].deadline>>job[i].profit;
        vis[i]=false;
    }
    sort(job,job+n,cmp);
    for(int i=0;i<n;i++){
        for(int j=min(n,job[i].deadline)-1;j>=0;j--){
            if(!vis[j]){
                res[j]=i;
                vis[j]=true;
                break;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(vis[i]){
            cnt++;
            Sum+=job[res[i]].profit;
        }
    }
    cout<<cnt<<" "<<Sum<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        Solve();
    }
}
