#include <iostream>
using namespace std;

int main()
{
    int N; // 참가자 수
    int T, P; // 티셔츠 판매 단위, 펜 판매 단위
    int tSum = 0;
    int size;
    int tNum[6] = { 0 };
    int pSet = 0, pEach = 0;

    cin >> N;

    for (int i = 0; i < 6; i++)
    {
        cin >> size;
        tNum[i] = size;
    }

    cin >> T >> P;

    // 티셔츠 묶음 수
    for (int i = 0; i < 6; i++)
    {
        if (tNum[i] % T > 0)
        {
            tSum += (tNum[i] / T + 1);
        }
        else
        {
            tSum += (tNum[i] / T);
        }
    }

    // 펜 묶음 수
    pSet = N / P;
    pEach = N % P;

    printf("%d\n", tSum);
    printf("%d %d\n", pSet, pEach);

    return 0;
}