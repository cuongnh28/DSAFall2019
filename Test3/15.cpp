#include<iostream>
using namespace std;
int main(){
    int t,n,s,m,d;
    cin>>t;
    while(t--){
        cin>>n>>s>>m;
        int need=m*s;
        if(need>(s-s/7)*n)  {
            cout<<-1<<endl;
        }
        else{
            s-=s/7;
            for(int i=1;i<=s;i++){
                int buy=n*i;
                if(buy>=need){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
}
