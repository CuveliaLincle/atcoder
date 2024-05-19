#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    vector<string> plus;
    vector<string> minus;

    rep(i, 100)
    {
        rep(j, 100)
        {
            if (i + j < 100)
            {
                plus.push_back(to_string(i) + " + " + to_string(j) + " = ");
            }
            if (i - j >= 0)
            {
                minus.push_back(to_string(i) + " - " + to_string(j) + " = ");
            }
        }
    }

    int M, N;
    cin >> M >> N;

    rep(i, M)
    {
        cout << plus[i] << endl;
    }
    rep(i, N)
    {
        cout << minus[i] << endl;
    }
}
