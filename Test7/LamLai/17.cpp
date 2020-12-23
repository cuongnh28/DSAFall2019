#include<bits/stdc++.h>
using namespace std;
bool checkDau(char c){
    if(c=='+' || c=='-' || c=='*' || c=='/' || c=='^')
        return 1;
    return 0;
}
void Solve(){
    string s;   cin>>s;
    stack<int> st;
    int op1,op2;
    for(int i=s.size()-1;i>=0;i--){
        char c = s[i];
        if(checkDau(c)){
            op1=st.top();   st.pop();
            op2=st.top();   st.pop();
            switch(c){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op1-op2);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op1/op2);
                    break;
                case '^':
                    st.push(pow(op1,op2));
                    break;
            }
        }
        else{
            st.push(c-'0');
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
