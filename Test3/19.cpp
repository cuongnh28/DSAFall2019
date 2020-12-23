#include<iostream>
using namespace std;
int main()
{
    int t;
    long long tu,mau;
    cin>>t;
    while(t--)
    {
        cin>>tu>>mau;
        long long x=2;
        while(tu>0){
            if(mau%tu==0){
                cout<<"1/"<<(mau/tu);
                break;
            }
            if(tu*x>=mau){
                cout<<"1/"<<x;
                tu=tu*x-mau;
                mau*=x;
                if(tu>0)    cout<<" + ";
            }
            else    ++x;
        }
        cout<<endl;
    }
}
