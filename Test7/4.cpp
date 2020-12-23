#include<bits/stdc++.h>
using namespace std;
bool checkOpen(char c){ //neu la dau mo thi them vao stack.
    if(c=='(' || c=='[' || c=='{')
        return true;
    return false;
}
bool checkDongMo(char c, char d){ //neu ko co dau dong mo canh nhau thi sai.
    if( (c=='(' && d!=')') || (c=='[' && d!=']') || (c=='{' && d!='}'))
        return false;
    return true;
}
int main(){
    int t;
    bool check;
    string s;
    cin>>t;
    while(t--){
        check=true;
        cin>>s;
        stack<char> c;
        for(int i=0;i<s.length();i++){
            if(checkOpen(s[i])){
                c.push(s[i]);
            }
            else{
                if(c.empty() || !checkDongMo( c.top(), s[i] ) ){
                    check=false;
                    break;
                }
                else{
                    c.pop();
                }
            }
        }
        if(check && c.empty()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


