#include<bits/stdc++.h>
using namespace std;
void Solve(){
    bool kt=false;
    string s,tmp="";
    getline(cin,s);
    stack<char> st;
    for(int i=0;i<s.size();i++){
        while(s[i]!=' ' && i<s.size()){
            st.push(s[i]);
            i++;
        }
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
        if(s[i]==' ')
            cout<<" ";
    }
    cout<<endl;
}
int main(){
    int t;  cin>>t;
    cin.ignore();
    while(t--){
        Solve();
    }
    return 0;
}
