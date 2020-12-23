#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,x;
    string s;
    stack<int> nums;
    cin>>t;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>x;
            nums.push(x);
        }
        else if(s=="POP"){
            if(nums.empty()){
                continue;
            }
            else{
                 nums.pop();
            }
        }
        else{
            if(!nums.empty()){
                cout<<nums.top()<<endl;
            }
            else{
                cout<<"NONE"<<endl;
            }
        }
    }
}

