#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
int main()
{
    int N, M;
    cin >> N >> M;
    char A[N][N];
    string B[M];
    rep(i, N)
    {
        string a;
        cin >> a;
        rep(j, N)
        {
            A[i][j] = a[j];
        }
    }
    rep(i, M)
    {
        string b;
        cin >> b;
        B[i] = b;
    }

    rep(i, M)
    {
        bool is_found = false;
        rep(j, N)
        {
            if (is_found)
            {
                break;
            }
            rep(k, N)
            {
                if (is_found)
                {
                    break;
                }
                if (A[j][k] == B[i][0])
                {
                    bool is_same = true;
                    rep(l, B[i].size())
                    {
                        if (j + l < N && k + l < N && A[j + l][k + l] != B[i][l])
                        {
                            is_same = false;
                            break;
                        }
                    }
                    if (is_same)
                    {
                        cout << k + 1 << " " << j + 1 << endl;
                        is_found = true;
                        break;
                    }
                }
            }
        }
    }
}
