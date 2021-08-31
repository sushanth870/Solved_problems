#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, l;
    cin >> n;
    int a[n];
    int b[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];

        b[i] = b[i - 1] + a[i];//pre-computing
    }
    cin >> l >> r;
    int ans = b[r] - b[l - 1];
    cout << ans << endl;
}