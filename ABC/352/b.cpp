#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    string expect_str;
    string actual_str;
    cin >> expect_str;
    cin >> actual_str;

    int ex_len = expect_str.size();
    int ac_len = actual_str.size();

    // 文字列の配列を宣言
    int expect_position[ex_len];

    int check_index = 0;

    for (int i = 0; i < ac_len; i++)
    {
        if (actual_str[i] == expect_str[check_index])
        {
            expect_position[check_index] = i + 1;
            check_index++;
        }
        if (check_index == ex_len)
            break;
    }

    for (int i = 0; i < ex_len; i++)
        cout << expect_position[i] << " \n"[i == ex_len - 1];
}
