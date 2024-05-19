#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int N, K;
    cin >> N >> K;

    int A[N][N];

    rep(i, N)
    {
        rep(j, N)
        {
            cin >> A[i][j];
        }
    }

    int rate = N / K;
    int ans[rate][rate];

    rep(i, rate)
    {
        rep(j, rate)
        {
            ans[i][j] = 0;
            for (int k = i * K; k < ((i + 1) * K); k++)
            {
                for (int l = j * K; l < ((j + 1) * K); l++)
                {
                    ans[i][j] += A[k][l];
                }
            }
        }
    }

    rep(i, rate)
    {
        rep(j, rate)
        {
            cout << std::floor((double)ans[i][j] / (double)(K * K));
            if (j != rate - 1)
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
