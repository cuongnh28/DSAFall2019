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
    string tmp,op1,op2;
    //tien to se chay tu phai qua trai, con lai chay tu trai qua phai.
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(checkDau(c)){ //neu c la cac dau.
            op1=st.top();    st.pop();
            op2=st.top();    st.pop();
            tmp='(' + op2 + c + op1 + ')';
            st.push(tmp);
        }
        else{           //neu c la toan hang thi them vao.
            st.push( string(1,c) ); //chuyen tu char sang string.
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
