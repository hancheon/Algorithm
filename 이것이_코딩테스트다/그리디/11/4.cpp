#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N; // 동전 개수
	int degree[1000] = { 0 };// 동전 단위 저장 배열

	cin >> N; // 동전 개수 입력
	for (int i = 0; i < N; i++) // 동전 단위 입력
	{
		int info;
		cin >> info;
		degree[info]++;
	}

	for (int i = 1; i < 1000; i++)
	{
		if (degree[i] == 0) // 화폐 단위에 없는 수 확인
		{
			int temp = i; // 화폐 단위에 없는 수 저장

			for (int j = i - 1; j > 0; j--)
			{
				if (degree[j] > 0) // 확인할 수 보다 작은 수 중에서 가장 큰 화폐
				{
					int cnt = degree[j]; // 남은 화폐 개수
					while (cnt > 0 && temp >= j) // 화폐가 남아있고, 확인할 수보다 작을 때
					{
						temp -= j; // 남은 화폐로 만들어야 하는 확인할 수
						cnt--;
					}
				}
			}

			if (temp != 0) // 확인할 수가 0이 되지 않았을 때 -> 화폐로 만들 수 없을 때
			{
				cout << i << endl;
				break;
			}
		}
	}

	return 0;
}
