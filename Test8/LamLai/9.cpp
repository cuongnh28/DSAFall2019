#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int Convert(int m, int n){
    if(m==n)    return 0;
    if(n%2==1)  return Convert(m,n+1)+1;
    else    return  Convert(m,n/2)+1;
}
void Solve(){
    int m,n;
    cin>>m>>n;
    if(m<=0 && n>0){
        cout<<-1<<endl;
        return;
    }
    if(m>=n){
        cout<<m-n<<endl;
        return;
    }
    cout<<Convert(m,n)<<endl;
}
int main()
{
    int t; cin>>t;
    while(t--)
    {
        Solve();
    }
}

