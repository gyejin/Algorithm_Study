#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define MAX_LEN 100001
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // n = 출발지, 도착지 = k
    int n, k, time = 0;
    cin >> n >> k;
    queue<int> q;
    vector<bool> vst(MAX_LEN, false);
    q.push(n);
    vst[n] = true;
    while (!q.empty())
    {
        int size = q.size();
        for (int i = 0; i < size; i++)
        {
            // 1 초 후에 +1 or -1 or *2 만큼 이동할 수 있다.
            int pos = q.front();
            q.pop();
            if (pos == k)
            {
                cout << time;
                return 0;
            }
            if (pos + 1 < MAX_LEN && !vst[pos + 1])
            {
                q.push(pos + 1);
                vst[pos + 1] = true;
            }
            if (pos - 1 >= 0 && !vst[pos - 1])
            {
                q.push(pos - 1);
                vst[pos - 1] = true;
            }
            if (pos * 2 < MAX_LEN && !vst[pos * 2])
            {
                q.push(pos * 2);
                vst[pos * 2] = true;
            }
        }
        time++;
    }
    return 0;
}