#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int n;  cin>>n;
    long long tmp;
    queue<long long> q;
    q.push(9);
    do{
        tmp=q.front();  q.pop();
        q.push(tmp*10);
        q.push(tmp*10+9);
    }while(tmp%n!=0);
    cout<<tmp<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}
