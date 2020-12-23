#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int> nums;
    vector<int> res;
    string s;
    while(1){
        if(nums.size()>200) break;
        cin>>s;
        if(s=="push"){
            int t;
            cin>>t;
            res.push_back(t);
            nums.push(t);
        }
        else if(s=="pop"){
            if(nums.empty()){
                cout<<"empty"<<endl;
                break;
            }
            else{
                 res.pop_back();
                 nums.pop();
            }
        }
        else{
            if(nums.empty()){
                cout<<"empty";
                break;
            }
            else{
                for(int i=0;i<res.size();i++){
                    cout<<res[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
}
