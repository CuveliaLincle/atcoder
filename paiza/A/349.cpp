#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    // 取りうる点数を格納するセット
    set<int> scores;
    scores.insert(0);

    // 各配点についてループ
    for (int i = 0; i < N; ++i)
    {
        set<int> new_scores;
        for (int score : scores)
        {
            new_scores.insert(score + a[i]);
        }
        scores.insert(new_scores.begin(), new_scores.end());
    }

    // 結果をベクターに移してソート
    vector<int> sorted_scores(scores.begin(), scores.end());

    // 結果を出力
    cout << sorted_scores.size() << endl;
    for (int score : sorted_scores)
    {
        cout << score << endl;
    }

    return 0;
}
