#include <iostream>

int main()
{
	int N, M;
	int sum = 0;
	int max = 0;
	int card[100] = { 0 };
	std::cin >> N >> M;

	for (int i = 0; i < N; i++) {
		std::cin >> card[i];
	}

	for (int j = 0; j < N; j++) {
		for (int k = 0; k < N; k++) {
			for (int q = 0; q < N; q++) {
				sum = card[j] + card[k] + card[q];
				if (j != k && k != q && j != q && (sum >= max) && (sum <= M)) {
					max = card[j] + card[k] + card[q];
				}
			}
		}
	}

	std::cout << max << std::endl;

	return 0;
}