#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int H, W;
    cin >> H >> W;

    string A[H][W];
    int ans[H][W];
    rep(i, H)
    {
        rep(j, W)
        {
            ans[i][j] = 0;
        }
    }

    rep(i, H)
    {
        string temp;
        cin >> temp;
        rep(j, W)
        {
            if (temp[j] == '#')
            {
                rep(k, H)
                {
                    ans[k][j] = 1;
                }
                rep(l, W)
                {
                    ans[i][l] = 1;
                }
            }
        }
    }

    int sum = 0;
    rep(i, H)
    {
        rep(j, W)
        {
            if (ans[i][j] == 1)
            {
                sum++;
            }
        }
    }
    cout << sum << endl;
}
