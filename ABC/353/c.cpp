#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }

    sort(A.begin(), A.end());

    int count = 0;
    int max_count = N;

    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j <= max_count; j++)
        {
            cout << "i" << i << " j" << j << endl;
            if (A[i] + A[j] >= 100000000)
            {
                max_count = j;
            }
            if (max_count == j)
            {
                count += N - j;
            }
        }
    }
    long long sum = 0;
    cout << count << endl;
    for (int i = 0; i < N; i++)
    {
        sum += A[i] * (N - 1);
    }

    sum -= count * 100000000;

    cout << sum << endl;
}
