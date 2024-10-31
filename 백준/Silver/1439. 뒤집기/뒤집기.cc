#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S; // 입력받을 문자열
    int cnt = 0;
    int zeroGroupCnt = 0; // 0 덩어리 개수
    int oneGroupCnt = 0; // 1 덩어리 개수
    cin >> S;

    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == '0') // 0이면 다음 1 나올 때까지 한 덩어리로 묶기
        {
            if (i == S.size() - 1)
            {
                zeroGroupCnt++;
                break;
            }
            for (int j = i + 1; j < S.size(); j++)
            {
                if (S[j] == '1' || (j == S.size() - 1))
                {
                    zeroGroupCnt++;
                    i = j - 1;
                    break;
                }
            }
        }
        else // 1이면 다음 0 나올 때까지 한 덩어리로 묶기
        {
            if (i == S.size() - 1)
            {
                oneGroupCnt++;
                break;
            }
            for (int j = i + 1; j < S.size(); j++)
            {
                if (S[j] == '0' || (j == S.size() - 1))
                {
                    oneGroupCnt++;
                    i = j - 1;
                    break;
                }
            }
        }
    }

    if (zeroGroupCnt + oneGroupCnt == 1)
        cnt = 0;
    else if (zeroGroupCnt <= oneGroupCnt) // 0의 개수가 1의 개수보다 작거나 같은 경우
        cnt += zeroGroupCnt;
    else // 1의 개수가 0의 개수보다 작은 경우
        cnt += oneGroupCnt;

    cout << cnt << endl;

    return 0;
}