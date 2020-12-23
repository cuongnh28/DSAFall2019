#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s; cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{')
            st.push(s[i]);
        else if(s[i]==')'){
            if(st.empty() || st.top()!='('){
                cout<<"NO"<<endl;
                return;
            }
            else
                st.pop();
        }
        else if(s[i]==']'){
            if(st.empty() || st.top()!='['){
                cout<<"NO"<<endl;
                return;
            }
            else
                st.pop();
        }
        else{
            if(st.empty() || st.top()!='{'){
                cout<<"NO"<<endl;
                return;
            }
            else
                st.pop();
        }
    }
    if(st.empty())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
