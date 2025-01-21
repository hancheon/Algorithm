#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;
    int result = 0;
    int ball[11] = { 0 };

    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        int w;
        cin >> w;
        ball[w]++;
    }

    int sum = 0;
    for (int i = 1; i < M; i++)
    {
        sum += ball[i]; // 무게가 i이하인 볼링공 개수 (중복 선택 회피)
        result += ball[i] * (N - sum); // 고른 무게의 가짓수 * 중복되지 않는 남은 볼링공 가짓수
    }

    cout << result << endl;

    return 0;
}
