#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string s;
    cin>>t;
    cin.ignore();
    while(t--){
        getline(cin,s);
        vector< string > tmp;
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                tmp.push_back(str);
                str="";
            }
            else{
                str=s[i]+str;
            }
        }
        tmp.push_back(str);
        for(int j=0;j<tmp.size();j++){
            cout<<tmp[j]<<" ";
        }
        cout<<endl;
    }
}


