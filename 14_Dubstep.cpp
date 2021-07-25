#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    string ans="";
    for(int i=0;i<n;i++)
    {
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            i=i+2;
            ans+=" ";
        }
        else{
            ans+=s[i];
        }
    }
    cout<<ans<<"\n";
    return 0;

}
