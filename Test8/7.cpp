#include<bits/stdc++.h>
using namespace std;
long long tim(long long n){
    queue<long long> q;
    long long cnt=0,tmp;
    tmp=1;
    q.push(tmp);
    while(q.front()<=n){
        cnt++;
        tmp=q.front();
        q.pop();
        q.push(tmp*10);
        q.push(tmp*10+1);
    }
    return cnt;
}
int main()
{
    int t;
    long long n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<tim(n)<<endl;
    }
}
