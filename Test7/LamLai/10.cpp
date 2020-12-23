#include<bits/stdc++.h>
using namespace std;
string chuanHoa(string s){
    string tmp;
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            char c=s[i-1];
            if(c=='-' || c=='+')
                st.push(c);
            if(c=='(' && !st.empty())
                st.push(st.top());
        }
        if(!st.empty() && st.top()=='-'){
            if(s[i]=='-')
                s[i]='+';
            else if(s[i]=='+')
                s[i]='-';
        }
        if(s[i]==')' && !st.empty())
            st.pop();
    }
    for(int i=0;i<s.size();i++){
        if(s[i]=='(' || s[i]==')')
            continue;
        else
            tmp+=s[i];
    }
    return tmp;
}
void Solve(){
    string s1,s2,tmp1,tmp2;
    cin>>s1>>s2;
    tmp1=chuanHoa(s1);
    tmp2=chuanHoa(s2);
    if(tmp1==tmp2)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
}

