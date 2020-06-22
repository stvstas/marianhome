#include <iostream>
#include <fstream>
using namespace std;
ifstream f("date.in");
int i,v[100],n,x,y,u,c,o,j,ok;
int main()
{
    f>>n;
    for(i=1;i<=n;i++)
    {
        f>>v[i];
    }
    for(i=1;i<=n;i++)
    {
        x=v[i];
        v[i]=0;
        while(x!=0)
        {
            y=x%10;
            v[i]=v[i]*10+y;
            x=x/10;
        }
    }
    u=0;
    for(i=1;i<n;i++)
    {
        ok=0;
        c=0;
        for(j=n;j>i && ok==0;j--)
        {
            if(v[j]%10==v[i]%10)
            {
                ok=1;
                c=j;
            }
        }
        if(c>u)u=c;
    }
    cout<<u;
    return 0;
}
