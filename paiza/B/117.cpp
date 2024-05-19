#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int Check(int ans, int actual);

int main()
{
    int N;
    cin >> N;
    int A[N];
    rep(i, N)
    {
        int a;
        cin >> a;
        A[i] = a;
    }

    int car = 1;
    int ans = 0;
    while (1)
    {
        rep(i, N)
        {
            if (A[i] == car)
            {
                car++;
            }
        }
        if (car == N + 1)
        {
            break;
        }
        ans++;
    }

    cout << ans << endl;
}