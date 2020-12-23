#include<bits/stdc++.h>
using namespace std;
bool checkDau(char c){
    if(c=='*' || c=='/' || c=='-' || c=='+' || c=='^')
        return true;
    else
        return false;
}
int Solve(string str){
    stack<int> st;
    for(int i=str.length()-1;i>=0;i--){
        char c=str[i];
        if(checkDau(c)){
            int x=st.top(); st.pop();
            int y=st.top(); st.pop();
            switch(c){
                case '+':{
                    st.push(x+y);
                    break;
                }
                case '-':{
                    st.push(x-y);
                    break;
                }
                case '*':{
                    st.push(x*y);
                    break;
                }
                case '/':{
                    st.push(x/y);
                    break;
                }
                case '^':{
                    st.push( pow(x,y) );
                    break;
                }
            }
        }
        else{
            st.push(c-'0');
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
        cout<<Solve(str)<<endl;
    }
}
