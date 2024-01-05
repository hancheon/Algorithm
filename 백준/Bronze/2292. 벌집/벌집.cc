#include <iostream>

int sum(int num)
{
	int sum = 0;

	for (int i = 0; i < num; i++) {
		sum += i;
	}

	return 6 * sum;
}

int main()
{
	int N;
	std::cin >> N;

	if (N == 1) {
		std::cout << 1 << std::endl;
	}
	else {
		for (int i = 0; i < N; i++) {
			if (sum(i) + 1 < N && sum(i + 1) + 1 >= N) {
				std::cout << i + 1 << std::endl;
				break;
			}
		}
	}

	return 0;
}