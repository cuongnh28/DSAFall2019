#include<bits/stdc++.h>
using namespace std;
bool kt(string s){
    stack<char> st;
    int j;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
            st.push(i);
        else if(s[i]==')'){
            j=st.top(); st.pop();
            if(i-j==2)
                return false;
            else if(s[j-1]=='(' && s[i+1]==')')
                return false;
        }
    }
    return true;
}
int main(){
    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        if(!kt(s))
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

