#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long k;
    string s;
    cin>>t; //nhap so bo test.
    while(t--){
        int fre[26]; //fre la mang chua so lan xuat hien cua cac ky tu tu A-Z.
        memset(fre,0,sizeof(fre));
        cin>>k>>s;
        if(k>=s.size()){
            cout<<-1<<endl;
            continue;
        }
        priority_queue<int> pq;
        for(int i=0;i<s.size();i++){
            fre[s[i]-'A']++;
        }
        for(int i=0;i<26;i++){
            if(fre[i]>0)
                pq.push(fre[i]);
        }
        long long tmp,res=0;
        while(k--){
            tmp=pq.top();
            pq.pop();
            pq.push(tmp-1);
        }
        while(!pq.empty()){
            tmp=pq.top();
            pq.pop();
            res+=tmp*tmp;
        }
        cout<<res<<endl;
    }
    return 0;
}
