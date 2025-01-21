#include <iostream>

bool isThree(int num) // 3이 포함되어 있는 지 확인하는 함수
{
	// 10으로 나눴을 때, 몫이 3이라면 십의 자릿수가 3인 경우, 나머지가 3이라면 일의 자릿수가 3인 경우
	if (num / 10 == 3 || num % 10 == 3) // 몫부터 계산해야 30-39의 불필요한 연산 줄어듦
		return true;
	else
		return false;
}

int main(void)
{
	int N;
	int count = 0;

	std::cin >> N;

	for (int i = 0; i <= N; i++)
	{
		for (int j = 0; j < 60; j++)
		{
			for (int k = 0; k < 60; k++)
				if (isThree(k) || isThree(j) || isThree(i)) // 초, 분, 시에 3인 포함되었으면 count++
					count++;
		}
	}
	std::cout << count;
    return 0;
}
