#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
int main()
{
    int N, M;
    cin >> N >> M;

    bool s[N];
    rep(i, N)
    {
        string str;
        cin >> str;
        if (str == "work")
        {
            s[i] = true;
        }
        else
        {
            s[i] = false;
        }
    }

    int right = 0;
    int max = 0;
    rep(left, N)
    {
        while (right < N && left <= right)
        {
            vector<bool> tempwork;
            for (int i = left; i <= right; i++)
            {
                tempwork.push_back(s[i]);
            }
            if (count(tempwork.begin(), tempwork.end(), true) <= M)
            {
                max = std::max(max, right - left + 1);
                right++;
            }
            else
            {
                break;
            }
        }
    }

    cout << max << endl;
}
