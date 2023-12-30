#include <iostream>

int main(void)
{
	int sound[8] = { 0 };
	int sub = 0;

	for (int i = 0; i < 8; i++) {
		std::cin >> sound[i];
	}

	for (int j = 0; j < 7; j++) {
		sub = sound[j] - sound[j + 1];
		if ((sub != 1) && (sub != -1)) {
			std::cout << "mixed" << std::endl;
			break;
		}
	}

	if (sub == 1) {
		std::cout << "descending" << std::endl;
	}
	else if (sub == -1) {
		std::cout << "ascending" << std::endl;
	}

	return 0;
}