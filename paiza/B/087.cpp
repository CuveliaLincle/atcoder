#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
int main()
{
    int h, w, k;
    cin >> h >> w >> k;
    vector<string> S;
    rep(i, h)
    {
        string s;
        cin >> s;
        S.push_back(s);
    }

    int ans = 0;
    rep(i, h)
    {
        rep(j, w)
        {
            if (j <= w - k)
            {
                string hidden_number = "";
                rep(l, k)
                {
                    hidden_number += S[i][j + l];
                }
                ans = max(ans, stoi(hidden_number));
            }
            if (i <= h - k)
            {
                string hidden_number = "";
                rep(l, k)
                {
                    hidden_number += S[i + l][j];
                }
                ans = max(ans, stoi(hidden_number));
            }
        }
    }
    cout << ans << endl;
}
