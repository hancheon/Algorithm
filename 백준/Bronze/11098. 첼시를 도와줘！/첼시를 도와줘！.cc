#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n = 0, p = 0, i, k;
	
	int max;
	int price;
	string name;
	string choice;
	
	cin >> n;

	for (i = 0; i < n; i++) {
		cin >> p;
		max = 0;
		for (k = 0; k < p; k++) {
			cin >> price >> name;
			if (price >= max) {
				max = price;
				choice = name;
			}
		} cout << choice << endl;
	}

	return 0;
}