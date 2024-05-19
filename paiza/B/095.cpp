#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int Check(int ans, int actual);

int main()
{
    int N, M;
    cin >> N >> M;

    int A[M];
    rep(i, M)
    {
        int a;
        cin >> a;
        A[i] = a;
    }

    int degrese_point = 0;
    int min_point = 999999999;
    rep(i, N)
    {
        rep(j, M)
        {
            int a;
            cin >> a;
            degrese_point += Check(A[j], a);
        }
        min_point = min(min_point, degrese_point);
        degrese_point = 0;
    }

    cout << max(100 - min_point, 0) << endl;
}

int Check(int ans, int actual)
{
    if (abs(ans - actual) <= 5)
    {
        return 0;
    }
    else if (abs(ans - actual) <= 10)
    {
        return 1;
    }
    else if (abs(ans - actual) <= 20)
    {
        return 2;
    }
    else if (abs(ans - actual) <= 30)
    {
        return 3;
    }
    else
    {
        return 5;
    }
}