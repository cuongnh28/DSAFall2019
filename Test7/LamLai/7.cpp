#include<bits/stdc++.h>
using namespace std;
void Solve(){
    stack<char> st;
    int res=0;
    string s;   cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push('(');
        }
        else{
            if(!st.empty()){
                st.pop();
            }
            else{
                res++;
                st.push('(');
            }
        }
    }
    res+=st.size()/2;
    cout<<res<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}

