#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
#include <atcoder/all>
using namespace atcoder;

using namespace std;
using ll = long long;
using mint = atcoder::modint998244353;

int main()
{
    int N;
    cin >> N;
    string A[N];
    ll rate = 0;
    for (int i = 0; i < N; i++)
    {
        string a;
        cin >> a;
        A[i] = a;
        rate += std::pow(10, a.size());
    }

    mint ans = 0;

    for (int i = 0; i < N; i++)
    {
        ans += mint(mint(stoi(A[i]))) * mint(i);
        if (i != N - 1)
        {
            rate -= std::pow(10, A[i].size());
            ans += mint(stoi(A[i])) * rate;
        }
    }
    cout << ans.val() << endl;
}
