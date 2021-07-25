#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int x,y;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    int ans=0;
    if(x<2)
        ans+=(2-x);
    else if(x>2)
        ans+=(x-2);
    if(y<2)
        ans+=(2-y);
    else if(y>2)
        ans+=(y-2);
    cout<<ans<<endl;
    return 0;
}

