#include<bits/stdc++.h>
using namespace std;
long long tim(long long n){
    long long res=1;
    queue<long long> q;
    q.push(1);
    while(res%n!=0){
        res=q.front();
        q.pop();
        q.push(res*10);
        q.push(res*10+1);
    }
    return res;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<tim(n)<<endl;
    }
}

