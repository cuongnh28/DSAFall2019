#include<bits/stdc++.h>
using namespace std;
int a[505][505],c[505][505],m,n;
int qhd()
{
    memset(c,0,sizeof(c));
    int kq=0;
    for(int i=1; i<=n; i++)   c[i][1]=a[i][1];
    for(int i=1; i<=m; i++)   c[1][i]=a[1][i];
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=m; j++)
        {
            if(a[i][j]==1)
            {
                c[i][j]=min( min(c[i][j-1],c[i-1][j]), c[i-1][j-1] ) + 1; //vi neu la so 1 thi no se bang kich thuoc cua hinh vuong nho nhat cong them 1.
            }
            else
                c[i][j]=0;
            kq=max(kq,c[i][j]);
        }
    }
    return kq;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
                cin>>a[i][j];
        }
        cout<<qhd()<<endl;
    }
}
