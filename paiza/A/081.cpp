#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N;
    cin >> N;

    int A[N];
    rep(i, N)
    {
        A[i] = -1;
    }

    rep(i, 2 * N)
    {
        int a;
        cin >> a;
        if (A[a - 1] == -1)
        {
            A[a - 1] = i;
        }
        else
        {
            A[a - 1] = i - A[a - 1] - 1;
        }
    }

    ll ans = 0;

    rep(i, N)
    {
        ans += A[i];
    }

    cout << ans << endl;
}