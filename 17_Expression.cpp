#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, o;
    cin >> n >> m >> o;
    int ans = max(n + m * o, max(n * (m + o),
                                 max(n * m * o, max((n + m) * o, n + m + o))));
    cout << ans;
    return 0;
}
/*
1+2*3=7
1*(2+3)=5
1*2*3=6
(1+2)*3=9*/
