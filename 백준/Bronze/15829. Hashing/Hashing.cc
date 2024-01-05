#include <iostream>
#include <cmath>

int hasing(int n, char s[])
{
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += (s[i] - 96) * (int)pow(31, i);
	}

	return sum % 1234567891;
}

int main()
{
	int N;
	char str[5] = { 0 };
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> str[i];
	}

	std::cout << hasing(N, str) << std::endl;

	return 0;
}