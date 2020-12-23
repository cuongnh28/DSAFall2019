#include<bits/stdc++.h>
using namespace std;
bool chuaxet[10];
void Solve(){
    vector<int> nums;
    int n,tmp;
    memset(chuaxet,true,sizeof(chuaxet));
    cin>>n;
    while(n--){
        cin>>tmp;
        while(tmp>0){
            if(chuaxet[tmp%10]){
                nums.push_back(tmp%10);
                chuaxet[tmp%10]=false;
            }
            tmp/=10;
        }
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
        cout<<nums[i]<<" ";
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
