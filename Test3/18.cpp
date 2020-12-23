#include<iostream>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int d1=0,d2=0;
        while(n>0)
        {
            if(n%7==0)
            {
                d1++;
                n-=7;
            }
            else
            {
                d2++;
                n-=4; 
            }
        }
        if(n<0)
            cout<<-1<<endl;
        else
        {
            for(int i=0;i<d2;i++)
                cout<<4;
            for(int i=0;i<d1;i++)
                cout<<7;
            cout<<endl;
        }
    }
}
