#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int x = 0, y = 0;
    for (int i = 0; i < 9; i++)
    {
        int temp;
        cin >> temp;
        x += temp;
    }

    for (int i = 0; i < 8; i++)
    {
        int temp;
        cin >> temp;
        y += temp;
    }

    if (x >= y)
        cout << (x - y + 1) << endl;
    else
        cout << 0 << endl;
}

