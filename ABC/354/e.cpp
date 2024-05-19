#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

vector<bool> win;

// true: 先手の勝ち false: 後手の勝ち
bool dfs(vector<P> cards, int count)
{
    if (cards.size() <= 1)
    {
        win.push_back(count % 2 == 1);
        return count % 2 != 1;
    }

    vector<P> next_cards = cards;

    bool is_found = false;
    P card_pair;

    for (int i = 0; i < cards.size(); i++)
    {
        for (int j = 0; j < cards.size(); j++)
        {
            if (is_found)
            {
                break;
            }
            if (cards[i].first == cards[j].first)
            {
                is_found = true;
                card_pair = make_pair(i, j);
                // 該当のカードを取り除く
                next_cards.erase(next_cards.begin() + i);
                next_cards.erase(next_cards.begin() + j);
            }
            else if (cards[i].second == cards[j].second)
            {
                is_found = true;
                card_pair = make_pair(i, j);
                // 該当のカードを取り除く
                next_cards.erase(next_cards.begin() + i);
                next_cards.erase(next_cards.begin() + j);
            }
        }
    }
    if (!is_found)
    {
        win.push_back(count % 2 == 1);
        return count % 2 == 1;
    }
    dfs(next_cards, count + 1);
}

int main()
{
    int N;
    cin >> N;
    vector<P> cards;
    rep(i, N)
    {
        int a, b;
        cin >> a >> b;
        P p = make_pair(a, b);
        cards.push_back(p);
    }
    dfs(cards, 1);
    rep(i, win.size())
    {
        if (win[i])
        {
            cout << "first" << endl;
        }
        else
        {
            cout << "second" << endl;
        }
    }
}
