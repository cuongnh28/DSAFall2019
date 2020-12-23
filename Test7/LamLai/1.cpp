#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    stack<int> st;
    vector<int> vt;
    while(1){
        if(st.size()>200)   break;
       cin>>s;
       if(s=="push"){
            cin>>t;
            vt.push_back(t);
            st.push(t);
       }
       else if(s=="pop"){
            if(st.empty()){
                cout<<"empty"<<endl;
                break;
            }
            else{
                vt.pop_back();
                st.pop();
            }
       }
       else{
            if(st.empty()){
                cout<<"empty"<<endl;
                break;
            }
            for(int i=0;i<vt.size();i++){
                cout<<vt[i]<<" ";
            }
            cout<<endl;
       }
    }
    return 0;
}
