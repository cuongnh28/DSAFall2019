#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int x;
string s;
void Solve(){
    cin>>s;
    if(s=="PUSH"){
        cin>>x;
        st.push(x);
    }
    else if(s=="POP"){
        if(!st.empty())
            st.pop();
    }
    else{
        if(st.empty())
            cout<<"NONE"<<endl;
        else
            cout<<st.top()<<endl;
    }
}
int main(){
    int t;  cin>>t;
    while(t--){
        Solve();
    }
    return 0;
}
