#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;

    ll C_sum = 0;
    string S[n];

    rep(i, n)
    {
        string name = "";
        ll rate = 0;

        cin >> name >> rate;
        S[i] = name;
        C_sum += rate;
    }

    // Sを辞書順にソート
    sort(S, S + n);
    cout << S[C_sum % n] << endl;
}
