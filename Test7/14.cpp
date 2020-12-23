#include<bits/stdc++.h>
using namespace std;
bool checkDau(char c){
    if(c=='*' || c=='/' || c=='-' || c=='+' || c=='^')
        return true;
    else
        return false;
}
//thuat toan kha loang ngoang, doc va tu bieu dien se hieu thoi.
string cover(string str)
{
    stack<string> st;
    string op1,op2,tmp;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(checkDau(c)){ //neu c la dau thi xu ly.
            op1=st.top();   st.pop();
            op2=st.top();   st.pop();
            tmp=c+op2+op1;
            st.push(tmp);
        }
        else{ //neu c la toan hang thi them vao stack.
            st.push( string(1,c) );
        }
    }
    return st.top();
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str;
        cin>>str;
        cout<<cover(str)<<endl;
    }
}
