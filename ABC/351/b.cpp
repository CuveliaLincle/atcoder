#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n = 0;
    cin >> n;
    // n*nのstring2次元配列を宣言
    char a[n][n];

    int ans_i = 0;
    int ans_j = 0;
    // 2次元配列に値を代入
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            a[i][j] = temp[j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != temp[j])
            {
                ans_i = i + 1;
                ans_j = j + 1;
            }
        }
    }

    cout << ans_i << " " << ans_j << endl;
}
