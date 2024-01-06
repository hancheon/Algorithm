#include <iostream>
using namespace std;

int main()
{
	int N;
	int M = 0;
	double sum = 0;
	int score[1000] = { 0 };
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (M <   score[i]) {
			M = score[i];
		}
		sum += score[i];
	}

	double result = sum * 100 / (N * M);

	cout << result << endl;


	return 0;
}