#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,res1=0,res2=0;
    cin>>a>>b;
    stack<int> a1,a2,b1,b2;
    while(a>0){
        if(a%10==5 || a%10==6){
            a1.push(5);
            a2.push(6);
        }
        else{
            a1.push(a%10);
            a2.push(a%10);
        }
        a/=10;
    }
    while(!a1.empty()){
        res1 += a1.top() * pow(10, a1.size()-1);
        res2 += a2.top() * pow(10, a2.size()-1);
        a1.pop();   a2.pop();
    }
    while(b>0){
        if(b%10==5 || b%10==6){
            b1.push(5);
            b2.push(6);
        }
        else{
            b1.push(b%10);
            b2.push(b%10);
        }
        b/=10;
    }
    while(!b1.empty()){
        res1 += b1.top() * pow(10, b1.size()-1);
        res2 += b2.top() * pow(10, b2.size()-1);
        b1.pop();   b2.pop();
    }
    cout<<res1<<" "<<res2;
    return 0;
}
