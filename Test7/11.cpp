#include<bits/stdc++.h>
using namespace std;
int uuTien(char c)
{
    if(c=='^')
        return 3;
    if(c=='/' || c=='*')
        return 2;
    if(c=='+' || c=='-')
        return 1;
    return -1;
}
string cover(string str)
{
    string res="";
    stack<char> st;
    char c;
    for(int i=0;i<str.length();i++){
        c=str[i];
        if(c!=' '){
            if(c=='(') //th1: c==(
                st.push(c);
            else if(c==')'){ //th2: c la dau dong ngoac.
                while(st.top()!='('){
                    res+=st.top();
                    st.pop();
                }
                if(st.top()=='(')
                    st.pop();
            }
            else if( ('a'<=c && c<='z') || ('A'<=c && c<='Z') ) //th3: c la toan hang.
                res+=c;
            else{ //th4: c la dau neu stack rong hoac uu tien hon thi them vao.
                if(st.empty() || (uuTien(c) > uuTien(st.top()) ) ){
                    st.push(c);
                }
                else { //neu stack khong rong.
                    while( !st.empty() && ( uuTien(c) <= uuTien(st.top()) ) ){
                        res+=st.top();
                        st.pop();
                    }
                    st.push(c);
                }
            }
        }
    }
    while(!st.empty()){
        if(st.top()=='('){
            st.pop();
        }
        else{
            res+=st.top();
            st.pop();
        }
    }
    return res;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<cover(str)<<endl;
    }
}
