#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    ll H;
    cin >> H;

    ll shokubutu = 0;
    ll day = 0;
    while (true)
    {
        shokubutu += pow(2, day);
        day++;
        if (shokubutu > H)
        {
            break;
        }
    }
    cout << day << endl;
}
