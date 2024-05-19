#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

bool STEP[200001] = {false};

void dfs(int A, int B, int step, int N)
{
    if (step + A >= N)
    {
        STEP[N] = true;
    }
    else
    {
        STEP[step + A] = true;
        dfs(A, B, step + A, N);
    }

    if (step + B >= N)
    {
        STEP[N] = true;
    }
    else
    {
        STEP[step + B] = true;
        dfs(A, B, step + B, N);
    }

    return;
}

int main()
{
    int N;
    cin >> N;
    int A, B;
    cin >> A >> B;
    dfs(A, B, 0, N);

    int count = 0;
    rep(i, N)
    {
        if (!STEP[i])
        {
            count++;
        }
    }
    cout << count - 1 << endl;
}