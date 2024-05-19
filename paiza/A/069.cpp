#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int N;

// ベクトルの外積
double culcVector(P a, P b)
{
    return a.first * b.second - a.second * b.first;
}

// 座標dが直線ab上にあるかどうか
bool isOnTheLine(P a, P b, P d)
{
    return culcVector(a, b) == culcVector(a, d) + culcVector(d, b);
}

int Check(P a, P b, P c, P d[])
{
    int count = 0;
    rep(i, N)
    {
        if (
            a == d[i] ||
            b == d[i] ||
            c == d[i])
        {
            continue;
        }
        if (
            isOnTheLine(a, b, d[i]) ||
            isOnTheLine(a, c, d[i]) ||
            isOnTheLine(b, c, d[i]))
        {
            count++;
            continue;
        }
        double v1 = culcVector(
            make_pair(b.first - a.first, b.second - a.second),
            make_pair(d[i].first - a.first, d[i].second - a.second));
        double v2 = culcVector(
            make_pair(c.first - b.first, c.second - b.second),
            make_pair(d[i].first - b.first, d[i].second - b.second));
        double v3 = culcVector(
            make_pair(a.first - c.first, a.second - c.second),
            make_pair(d[i].first - c.first, d[i].second - c.second));
        bool isNeg = (v1 < 0) || (v2 < 0) || (v3 < 0);
        bool isPos = (v1 > 0) || (v2 > 0) || (v3 > 0);
        if (!isNeg || !isPos)
        {
            count++;
        }
    }
    return count;
};

int main()
{
    cin >> N;
    P A[N];
    rep(i, N)
    {
        int x, y;
        cin >> x >> y;
        A[i] = make_pair(x, y);
    }

    int ans = 0;
    rep(i, N)
    {
        rep(j, N)
        {
            rep(k, N)
            {
                if (i == j || j == k || k == i)
                {
                    continue;
                }
                ans = max(ans, Check(A[i], A[j], A[k], A));
            }
        }
    }
    cout << ans << endl;
}