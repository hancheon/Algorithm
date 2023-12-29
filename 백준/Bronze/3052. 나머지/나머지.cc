#include <iostream>

int main(void)
{
	int num[10] = { 0 };
	int rest[42] = { 0 };
	int count = 0;

	for (int i = 0; i < 10; i++) {
		int r_num = 0;
		std::cin >> num[i];
		r_num = num[i] % 42;
		rest[r_num]++;
	}

	for (int j = 0; j < 42; j++) {
		if (rest[j] != 0) {
			count++;
		}
	}

	std::cout << count;
}