#include <iostream>
#include <cmath>

int main(void)
{
	int A, B, C;

	while (1) {
		std::cin >>  A >> B >> C;

		if (A == 0) {
			break;
		}

		int A2 = pow(A, 2);
		int B2 = pow(B, 2);
		int C2 = pow(C, 2);

		if (A2 == B2 + C2 || B2 == A2 + C2 || C2 == A2 + B2) {
			std::cout << "right" << std::endl;
		}
		else {
			std::cout << "wrong" << std::endl;
		}
	}

	return 0;
}