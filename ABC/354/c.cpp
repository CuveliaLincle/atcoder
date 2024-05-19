#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
using Tuple = tuple<int, int, int>;

int main()
{
    int N;
    cin >> N;

    vector<Tuple> v(N);
    rep(i, N)
    {
        int w, h;
        cin >> w >> h;
        v[i] = make_tuple(w, h, i + 1);
    }

    // タプルの1番目で降順ソート
    sort(v.begin(), v.end(), [](const Tuple &a, const Tuple &b)
         { return get<0>(a) > get<0>(b); });

    vector<Tuple> use_card_by_attack;
    ll prev_cost = 9999999999;

    rep(i, v.size())
    {
        if (prev_cost < get<1>(v[i]))
        {
            continue;
        }
        else
        {
            prev_cost = get<1>(v[i]);
            use_card_by_attack.push_back(v[i]);
        }
    }

    // タプルの3番目で昇順ソート
    sort(use_card_by_attack.begin(), use_card_by_attack.end(), [](const Tuple &a, const Tuple &b)
         { return get<2>(a) < get<2>(b); });
    cout << use_card_by_attack.size() << endl;
    rep(i, use_card_by_attack.size())
    {
        if (i == use_card_by_attack.size() - 1)
        {
            cout << get<2>(use_card_by_attack[i]) << endl;
            break;
        }
        cout << get<2>(use_card_by_attack[i]) << " ";
    }
}
