#include <iostream>
#include <vector>
using namespace std;
/*
세로 크기N과 가로 크기 M
-‘와 ’|‘로만 이루어져 있다. N과 M은 50 이하인 자연수
2차원 벡터로 board 만들고
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, ans = 0;
    cin >> n >> m;
    vector<vector<char>> board(n, vector<char>(m));
    vector<vector<bool>> vst(n, vector<bool>(m, false));
    for (int y = 0; y < n; y++)
    {
        string line;
        cin >> line; // 한 줄 읽기
        for (int x = 0; x < m; x++)
        {
            board[y][x] = line[x];
        }
    }
    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < m; x++)
        {
            if (!vst[y][x])
            {
                if (board[y][x] == '-') // '-' 일 때
                {
                    ans++;
                    int nx = x;
                    while (nx < m && board[y][nx] == '-')
                    {
                        vst[y][nx] = true;
                        nx++;
                    }
                }
                else // '|' 일 때
                {
                    ans++;
                    int ny = y;
                    while (ny < n && board[ny][x] == '|')
                    {
                        vst[ny][x] = true;
                        ny++;
                    }
                }
            }
        }
    }
    cout << ans;
    return 0;
}