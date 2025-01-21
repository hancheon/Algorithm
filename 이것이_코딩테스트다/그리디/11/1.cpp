#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> scared;

int main()
{
    cin >> N; // 모험가 수 입력

    for (int i = 0; i < N; i++) // 모험가 공포도 입력
    {
        int info;
        cin >> info; // 각 모험가의 공포도 입력
        scared.push_back(info); // 모험가 공포도 저장
    }

    // 공포도가 낮은 사람 먼저 그룹 만드는 게 더 많은 그룹 형성하므로 공포도 오름차순 정렬
    sort(scared.begin(), scared.end());
    
    int group = 0;
    int sum = 0;

    for (vector<int>::iterator iter = scared.begin(); iter != scared.end(); iter++)
    {
        sum += 1; // 현재 공포도보다 남은 인원에 한 명씩 추가
        if (*iter <= sum) // 남은 인원이 현재 공포도보다 많으면 그룹 하나 형성
        {
            group += 1;
            sum -= *iter;
        }
    }

    cout << group << endl;

    return 0;
}
