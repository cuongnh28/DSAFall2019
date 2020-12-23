#include<bits/stdc++.h>
using namespace std;
int a[10000005],n;
void Solve(){
    bool chuaxet[10];
    vector<int> nums;
    for(int i=0;i<=9;i++)
        chuaxet[i]=true;
    for(int i=0;i<n;i++){
        while(a[i]>0){
            int x=a[i]%10;
            a[i]/=10;
            if(chuaxet[x]){
                nums.push_back(x);
                chuaxet[x]=false;
            }
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)   cin>>a[i];
        Solve();
    }
}
