#include<bits/stdc++.h>
bool checkDau(char c){
    if(c=='*' || c=='/' || c=='-' || c=='+' || c=='^')
        return true;
    else
        return false;
}
using namespace std;
int Solve(string str){
    stack<int> st;
    for(int i=str.length()-1;i>=0;i--){
        char c=str[i];
        if(checkDau(c)){
            int x=
        }
        else{
            st.push(c-'0');
        }
    }
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
