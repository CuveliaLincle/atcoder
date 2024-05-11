#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int x[n];
    rep(i, n) cin >> x[i];

    ll ans = 1000000000;
    for (int i = 1; i <= 100; i++)
    {
        ll sum = 0;
        rep(j, n)
        {
            sum += (x[j] - i) * (x[j] - i);
        }
        ans = min(ans, sum);
    }

    cout << ans << endl;
}
