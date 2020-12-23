#include<bits/stdc++.h>
using namespace std;
bool checkDau(char c){
    if(c=='+' || c=='-' || c=='/' || c=='*' || c=='^')
        return true;
    return false;
}
int uuTien(char c){
    if(c=='^')
        return 3;
    if(c=='/' || c=='*' || c=='%')
        return 2;
    if(c=='+' || c=='-')
        return 1;
    return -1;
}
string cover(string str){
    string res="";
    stack<char> dau;
    for(int i=0;i<str.length();i++){
        char c=str[i];
        if(c=='('){
            dau.push(c);
        }
        else if( ('a'<=c&&c<='z') || ('A'<=c && c<='Z') ){
            res+=c;
        }
        else if(checkDau(c)){
            if(dau.empty()){
                dau.push(c);
            }
            else{
                char y=dau.top();
                if(uuTien(c) > uuTien(y)){
                    dau.push(c); //uu tien c cao hon.
                }
                else{
                    res+=y;
                    dau.pop();
                    dau.push(c);
                }
            }
        }
        else if(c==')'){
            while(dau.top()!='(' && !dau.empty()){
                res+=dau.top();
                dau.pop();
            }
            if(dau.top()=='('){
                dau.pop();
            }
        }
    }
    while(!dau.empty()){
        if(dau.top()=='('){
            dau.pop();
        }
        else{
            res+=dau.top();
            dau.pop();
        }
    }
    return res;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        cout<<cover(str)<<endl;
    }
}
