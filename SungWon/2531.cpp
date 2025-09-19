#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // 접시 = N, 초밥 가짓수 = D, 연속해서 먹는 접시 수 = K, 쿠폰 번호 = C
    int N, D, K, C;
    cin >> N >> D >> K >> C;

    vector<int> sushi(N);
    for (int i = 0; i < N; i++)
    {
        cin >> sushi[i];
    }
    vector<int> count(N + 1, 0);
    int cnt = 0;
    // 초기 설정
    for (int i = 0; i < K; i++)
    {
        if (count[sushi[i]] == 0)
        {
            cnt++;
        }
        count[sushi[i]]++;
    }

    int max_val = 0;
    for (int s = 0; s < N; s++)
    {
        if (count[C] == 0)
        {
            max_val = max(max_val, cnt + 1);
        }
        else
        {
            max_val = max(max_val, cnt);
        }

        int leaving_sushi = sushi[s];
        count[leaving_sushi]--;
        if (count[leaving_sushi] == 0)
        {
            cnt--;
        }

        int entering_sushi_idx = (s + K) % N;
        int entering_sushi = sushi[entering_sushi_idx];

        if (count[entering_sushi] == 0)
        {
            cnt++;
        }
        count[entering_sushi]++;
    }
    cout << max_val;
    return 0;
}