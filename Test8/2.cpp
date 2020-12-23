#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a;
    string s;
    cin>>t;
    queue<int> q;
    while(t--){
        cin>>s;
        if(s=="PUSH"){
            cin>>a;
            q.push(a);
        }
        else if(s=="POP"){
            if(!q.empty())
                q.pop();
        }
        else if(s=="PRINTFRONT"){
            if(q.empty())
                cout<<"NONE"<<endl;
            else{
                cout<<q.front()<<endl;
            }
        }
    }
}
