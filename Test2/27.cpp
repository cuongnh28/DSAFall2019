#include<iostream>
using namespace std;
int t,n,k,s,a[21];
bool check,ok[21];
void input()
{
	s=0;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
		ok[i]=true;
	}
}
void Try(int sum, int cnt)
{
	if(check)	return;
	if(cnt==k)
	{
		check=true;
		return;
	}
	for(int i=1;i<=n;i++){
		if(ok[i])
		{
			ok[i]=false;
			if(sum==s)
			{
				Try(0,cnt+1);
				return;
			}
			if(sum>s)	return;
			else	Try(sum+a[i],cnt);
		}
		ok[i]=true;
	}
}
int main()
{
	cin>>t;
	while(t--)
	{
		input();
	if(s%k!=0)	cout<<0;
	else
	{
		s/=k;
		Try(0,0);
		if(check)	cout<<1;
		else	cout<<0;
	}
	cout<<endl;
	}
	return 0;
}
