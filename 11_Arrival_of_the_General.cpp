#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n],mn=101,mx=0,maxi,mini;
   for(int i=0;i<n;i++){
      cin>>a[i];
      if(a[i]>mx)
      {
          mx=a[i];
          maxi=i;
      }
      if(a[i]<=mn)
      {
          mn=a[i];
          mini=i;
      }
   }
   if(maxi>mini)
     cout<<maxi+n-1-mini-1;
   else
      cout<<maxi+n-1-mini;
   return 0;
}
