
#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    ll m = 0;
    for (int i = 0; i < n; i++)
    {
        m = std::max(b[i] - a[i], m);
    }

    ll ans = m;
    for (int i = 0; i < n; i++)
    {
        ans += a[i];
    }

    cout << ans << endl;
}