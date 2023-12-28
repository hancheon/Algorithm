#include <iostream>

int main(void)
{
	std::string word;
	std::cin >> word;

	int num[26] = { 0 };

	for (int i = 0; i < 26; i++) {
		num[i] = word.find(i + 97);
		std::cout << num[i] << ' ';
	}


	return 0;
}