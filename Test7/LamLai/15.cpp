#include<bits/stdc++.h>
using namespace std;
bool checkDau(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
        return 1;
    return 0;
}
void Solve(){
    string s;   cin>>s;
    string op1,op2;
    stack<string> st;
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(checkDau(c)){
            op1=st.top();   st.pop();
            op2=st.top();   st.pop();
            st.push('('+op2+c+op1+')');
        }
        else
            st.push(string(1,c));
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
