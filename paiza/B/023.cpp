#include <iostream>
#include <vector>
#include <map>
#include <set>
#include <string>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

using namespace std;
// 各数字が使うマッチ棒のセグメント表現をboolの多次元配列に変換
const bool segments[10][7] = {
    {true, true, true, false, true, true, true},     // 0
    {false, false, true, false, false, true, false}, // 1
    {true, false, true, true, true, true, false},    // 2
    {true, false, true, true, false, true, true},    // 3
    {false, true, true, true, false, true, false},   // 4
    {true, true, false, true, false, true, true},    // 5
    {true, true, false, true, true, true, true},     // 6
    {true, false, true, false, false, true, false},  // 7
    {true, true, true, true, true, true, true},      // 8
    {true, true, true, true, false, true, true}      // 9
};

int main()
{
    string s;
    cin >> s;
    bool s_segments[s.length()][7] = {false};

    cout << s << endl;
    // 初期化
    rep(i, s.length())
    {
        rep(j, 7)
        {
            s_segments[i][j] = false;
        }
    }

    rep(i, s.length())
    {
        rep(j, 7)
        {
            cout << segments[stoi(to_string(s[i]))][j] << endl;
            s_segments[i][j] = segments[stoi(to_string(s[i]))][j];
        }
    }

    cout << s_segments;
}
