#include <iostream>
using namespace std;

int main() {
	int N;
	unsigned int K;
	int mul_upper = 1;
	int mul_under = 1;

	cin >> N >> K;

	for (int i = 0; i < K; i++) {
		mul_upper *= (N-i);
		mul_under *= (K - i);
	}

	cout << mul_upper / mul_under << endl;

	return 0;
}