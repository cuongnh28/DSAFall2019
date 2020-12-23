#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,res;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        res=0;
        stack<char> c;
        int n1=0,n2=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(c.empty()){
                    n2++;
                }
                else{
                    c.pop();
                }
            }
            else{
                c.push(s[i]);
            }
        }
        n1=c.size();
        if(n1%2==0 && n2%2==0){
            res=n1/2+n2/2;
        }
        else{
            res=n1/2+n1%2+n2/2+n2%2;
        }
        cout<<res<<endl;
    }
}




