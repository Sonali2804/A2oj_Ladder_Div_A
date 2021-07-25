#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n>>p;
    int a[p];
    set<int>st;
    for(int i=0;i<p;i++){
       cin>>a[i];
       st.insert(a[i]);
    }
    cin>>q;
    int b[q];
     for(int i=0;i<q;i++){
       cin>>b[i];
       st.insert(b[i]);
    }
    if(st.size()==n)
       cout<<"I become the guy.\n";
    else
       cout<<"Oh, my keyboard!\n";
    return 0;
}
