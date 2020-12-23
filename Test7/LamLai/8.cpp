#include<bits/stdc++.h>
using namespace std;
void Solve(){
    string s;   cin>>s;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            char c=s[i-1];
            if(c=='-' || c=='+')    st.push(c);
            if(c=='(' && !st.empty())  st.push(st.top());
        }
        if(!st.empty() && st.top()=='-'){
            if(s[i]=='-')
                s[i]='+';
            else if(s[i]=='+')
                s[i]='-';
        }
        if(!st.empty() && s[i]==')')    st.pop();
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]==')')
            continue;
        else
            cout<<s[i];
    }
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}

