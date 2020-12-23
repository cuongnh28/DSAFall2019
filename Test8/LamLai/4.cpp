#include<bits/stdc++.h>
using namespace std;
void Solve(){
    int Fre[26]={0},k;
    string s;
    cin>>k>>s;
    if(k>=s.size()){
        cout<<-1<<endl;
        return;
    }
    priority_queue<int> pq;
    for(int i=0;i<s.size();i++){
        Fre[s[i]-'A']++;
    }
    for(int i=0;i<26;i++){
        if(Fre[i]>0)
            pq.push(Fre[i]);
    }
    long long t,res=0;
    while(!pq.empty() && k>0){
        t=pq.top(); pq.pop();
        k--;
        pq.push(t-1);
    }
    while(!pq.empty()){
        res+=(long long)pow(pq.top(),2);
        pq.pop();
    }
    cout<<res<<endl;
}
int main()
{
    int t=1; cin>>t;
    while(t--)
    {
        Solve();
    }
}
