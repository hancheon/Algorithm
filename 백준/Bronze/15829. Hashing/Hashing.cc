#include <iostream>

int main()
{
	int N;
	char str[50] = { 0 };
	long long sum = 0;
	long long r = 1;
	std::cin >> N;

	for (int i = 0; i < N; i++) {
		std::cin >> str[i];
		sum = (sum + ((str[i] - 96) * r )) % 1234567891;
		r = (r * 31) % 1234567891;
	}

	std::cout << sum << std::endl;

	return 0;
}