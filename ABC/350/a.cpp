#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int a[n];
    int b[n];

    rep(i, n)
    {
        int temp;
        cin >> temp;
        a[temp - 1] = i + 1;
        b[i] = temp;
    }

    vector<string> c(0);

    rep(i, n - 1)
    {
        if (a[i] != i + 1)
        {
            c.push_back(to_string(i + 1) + " " + to_string(a[i]));
            a[b[i] - 1] = a[i];
            a[i] = i + 1;
        }
    }

    cout << c.size() << endl;
    rep(i, c.size())
    {
        cout << c[i] << endl;
    }
}
