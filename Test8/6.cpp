#include<bits/stdc++.h>
using namespace std;
long long bir(int x){
    if(x==1)    return 1;
    if(x%2==0)  return bir(x/2)*10;
    else    return bir(x/2)*10+1;
}
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a=1;
        while(9*bir(a)%n!=0){
            a+=1;
        }
        cout<<9*bir(a)<<endl;
    }
}

