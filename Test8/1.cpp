#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,choice,a;
    cin>>t;
    while(t--)
    {
        queue<int> q;
        cin>>n;
        while(n--)
        {
            cin>>choice;
            switch(choice)
            {
                case 1:
                {
                    cout<<q.size()<<endl;
                    break;
                }
                case 2:
                {
                    if(!q.empty())
                        cout<<"NO";
                    else
                        cout<<"YES";
                    cout<<endl;
                    break;
                }
                case 3:
                {
                    cin>>a;
                    q.push(a);
                    break;
                }
                case 4:
                {
                    if(!q.empty())
                        q.pop();
                    break;
                }
                case 5:
                {
                    if(!q.empty())
                        cout<<q.front();
                    else
                        cout<<-1;
                    cout<<endl;
                    break;
                }
                case 6:
                {
                    if(!q.empty())
                        cout<<q.back();
                    else
                        cout<<-1;
                    cout<<endl;
                    break;
                }
            }
        }
    }
}

