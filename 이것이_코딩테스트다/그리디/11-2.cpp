#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S; // 입력받을 문자열
    int result; // 계산 결과 저장
    
    cin >> S; // 문자열 입력

    result = S[0] - '0'; // 문자열의 첫 번째 값으로 결과 설정

    for (int i = 1; i < S.size(); i++)
    {
        // 현재 result 또는 계산할 문자열이 0 또는 1이면 더하기
        if (S[i] <= 1 || result <= 1)
        {
            result += (S[i] - '0');
        }
        else // 그 외의 경우는 곱하기
        {
            result *= (S[i] - '0');
        }
    }

    cout << result << endl;
    return 0;
}
