#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n, k;
    cin >> n >> k;

    int a[n];

    rep(i, n)
    {
        int a_n;
        cin >> a_n;
        a[i] = a_n;
    }

    int ans = 0;
    int norimono = 0;

    rep(i, n)
    {
        if (k < norimono + a[i])
        {
            norimono = a[i];
            ans++;
        }
        else
        {
            norimono += a[i];
        }
    }

    cout << ans + 1;
}
