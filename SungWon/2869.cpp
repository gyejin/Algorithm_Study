#include <iostream>
#include <vector>
using namespace std;
/*
아이디어:
아침에 A만큼 + 밤에 B만큼 -
V까지 도달하는 최소 일수는?
(a-b)*day = v 라고 하면 day = v/(a-b);
음 여기서 문제는 A만큼 올라가고 즉시 종료될 수 있다는 것임
그럼 (a-b)*(day-1)+a = v 라고 하면 될까?
(day-1) = (v-a)/(a-b)
*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, v, day = 0;
    cin >> a >> b >> v;
    day += (v - a) / (a - b) + 1;
    if ((v - a) % (a - b) != 0)
        day++;

    cout << day;
    return 0;
}