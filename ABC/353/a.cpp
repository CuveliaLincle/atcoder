#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    int h[n];

    rep(i, n)
    {
        cin >> h[i];
    }

    int first = h[0];

    bool isNothing = true;
    rep(i, n)
    {
        if (first < h[i])
        {
            cout << i + 1 << endl;
            isNothing = false;
            break;
        }
    }

    if (isNothing)
    {
        cout << -1 << endl;
    }
}
