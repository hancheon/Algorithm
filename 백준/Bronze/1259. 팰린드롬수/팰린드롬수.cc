#include <iostream>
#include <string>

using namespace std;

int main()
{
	string N;

	while (1) {
		cin >> N;

		string R = "yes";

		if (N == "0") {
			break;
		}
		
		for (int i = 0; i < (N.size() / 2); i++) {
			if (N[i] != N[N.size() - 1 - i]) {
				R = "no";
				break;
			}
		}

		cout << R << endl;
	}

	return 0;
}