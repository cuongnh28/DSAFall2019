#include<bits/stdc++.h>
#define cap pair<int, int>
using namespace std;
int main(){
    int n,x;
    string s;
    vector<cap> dscanh;
    cin>>n;
    cin.ignore();
    for(int i=1;i<=n;i++){
        getline(cin,s);
        for(int j=0;j<s.size();j++){
            if(s[j]-'0'>=1 && s[j]-'0'<=9 && s[j+1]-'0'>=0 && s[j+1]-'0'<=9){
                int x=(s[j]-'0')*10+(s[j+1]-'0');
                if(x>i){
                    dscanh.push_back(cap(i,x));
                }
                j++;
            }
            else if(s[j]-'0'>=1 && s[j]-'0'<=9){
                int x=s[j]-'0';
                if(x>i){
                    dscanh.push_back(cap(i,x));
                }
            }
        }
    }
    for(int i=0;i<dscanh.size();i++){
        cout<<dscanh[i].first<<" "<<dscanh[i].second<<endl;
    }
}
