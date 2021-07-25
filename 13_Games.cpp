#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int mat[n][2];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> mat[i][j];
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (mat[i][0] == mat[j][1])
                ans++;
            if (mat[i][1] == mat[j][0])
                ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}
