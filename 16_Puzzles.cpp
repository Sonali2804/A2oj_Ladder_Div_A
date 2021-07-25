#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int a[m];
  for(int i=0;i<m;i++)
  {
      cin>>a[i];
  }
  sort(a,a+m);
  int mn=INT_MAX;
  for(int i=n-1;i<m;i++)
  {
      mn=min(mn,a[i]-a[i-n+1]);
  }
  cout<<mn<<endl;
  return 0;

}
