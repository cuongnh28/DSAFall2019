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
    for(int i=s.size()-1;i>=0;i--){
        char c=s[i];
        if(checkDau(c)){
            op1=st.top();   st.pop();
            op2=st.top();   st.pop();
            st.push(op1+op2+c);
        }
        else{
            st.push(string(1,c));
        }
    }
    cout<<st.top()<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
