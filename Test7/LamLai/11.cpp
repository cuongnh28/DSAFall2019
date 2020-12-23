#include<bits/stdc++.h>
using namespace std;
int uuTien(char c){
    if(c=='^')
        return 3;
    if(c=='+' || c=='-')
        return 1;
    if(c=='*' || c=='/' || c=='%')
        return 2;
    return -1;
}
void Solve(){
    string s;   cin>>s;
    stack<char> st;
    string res="";
    for(int i=0;i<s.size();i++){
        char c=s[i];
        if(c=='(')
            st.push(c);
        else if(c==')'){
            while(!st.empty() && st.top()!='('){
                res+=st.top();
                st.pop();
            }
            if(!st.empty() && st.top()=='(')
                st.pop();
        }
        else if( ('a'<=c && c<='z') ||  ('A'<=c && c<='Z') )
            res+=c;
        else{
            if(st.empty())
                st.push(c);
            else{
                if( uuTien(c)<=uuTien(st.top()) ){
                    res+=st.top();
                    st.pop();
                    st.push(c);
                }
                else
                    st.push(c);
            }
        }
    }
    while(!st.empty()){
        if(st.top()!='(')
            res+=st.top();
        st.pop();
    }
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}
