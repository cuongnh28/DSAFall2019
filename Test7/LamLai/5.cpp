#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int res=0;
    stack<int> st; //luu vi tri.
    st.push(-1);
    string s;   cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(i);
        }
        else{
            st.pop();
            if(!st.empty()){
                res=max(res,i-st.top());
            }
            else
                st.push(i);
        }
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
