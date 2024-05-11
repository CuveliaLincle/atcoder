#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main()
{
    int n;
    cin >> n;
    int init[n];
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        init[i] = temp;
    }

    vector<ll> balls;
    for (int i = 0; i < n; i++)
    {
        balls.push_back(init[i]);
        while (true)
        {
            if (balls.size() > 1)
            {
                if (balls[balls.size() - 1] == balls[balls.size() - 2])
                {
                    int temp = balls[balls.size() - 1];
                    balls.pop_back();
                    balls.pop_back();
                    balls.push_back(temp + 1);
                }
                else
                {
                    break;
                }
            }
            else
            {
                break;
            }
        }
    }

    cout << balls.size() << endl;
}
