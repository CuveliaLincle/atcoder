#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;
int main()
{
    int N, H, W;
    cin >> N >> H >> W;
    string S[H];
    rep(i, H)
    {
        cin >> S[i];
    }

    int dx[] = {0, 1, 0, -1};
    int dy[] = {1, 0, -1, 0};
    int dir = 0;
    int x = 0, y = 0;
    vector<char> route;
    int count = 0;

    while ((int)route.size() < N)
    {
        route.push_back(S[x][y]);
        int nx = x + dx[dir];
        int ny = y + dy[dir];
        if (S[x][y] == '#')
        {
            count++;
        }
        S[x][y] = 'X';

        if (nx >= 0 && nx < H && ny >= 0 && ny < W && S[nx][ny] != 'X')
        {
            x = nx;
            y = ny;
        }
        else
        {
            dir = (dir + 1) % 4;
            x += dx[dir];
            y += dy[dir];
        }
    }

    cout << count << endl;
}
