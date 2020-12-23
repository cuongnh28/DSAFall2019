#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        stack<int> c; //stack chua cac vi tri.
        int res=0;
        c.push(-1);
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                c.push(i);
            else{
                c.pop();
                if(!c.empty()){
                    res=max(res,i-c.top());
                }
                else
                    c.push(i);
            }
        }
        cout<<res<<endl;
    }
}



