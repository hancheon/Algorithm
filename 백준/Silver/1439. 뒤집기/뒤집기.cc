#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S; // 입력받을 문자열
    int zeroCnt = 0; // 1을 0으로 바꾸는 횟수
    int oneCnt = 0; // 0을 1로 바꾸는 횟수
    cin >> S;

    if (S[0] == '0') // 첫 문자가 0이면 1로 바꿈
        oneCnt++;
    else // 첫 문자가 1이면 0로 바꿈
        zeroCnt++;

    for (int i = 0; i < S.size() - 1; i++)
    {
        if (S[i] != S[i + 1]) // i번째 문자와 다음 문자가 다를 때
        {
            if (S[i + 1] == '0') // 다음 문자가 0이면 1로 바꿈
                oneCnt++;
            else // 다음 문자가 1이면 0으로 바꿈
                zeroCnt++;
        }
    }

    cout << min(zeroCnt, oneCnt) << endl;

    return 0;
}