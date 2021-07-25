#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r;
    cin>>r;
    int mat[r][3];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>mat[i][j];
        }
    }
    int sum[3];
    memset(sum,0,sizeof sum);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum[j]+=mat[i][j];
        }
    }
    bool flag=true;
    for(int i=0;i<3;i++)
        if(sum[i]!=0)
           flag = false;
    if(flag == true)
        cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
