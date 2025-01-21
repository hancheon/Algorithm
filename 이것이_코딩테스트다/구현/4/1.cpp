#include <iostream>
#include <string>

int main(void)
{
	int N;
	std::string plan;
	int xpos = 1;
	int ypos = 1;

	std::cin >> N; // 공간 크기 입력 받기
	std::cin.ignore(); // 입력 버퍼 비우기 -> string 입력 받기 위해
	getline(std::cin, plan); // 계획 입력 받기

	for (int i = 0; i < plan.size(); i++)
	{
		if (plan[i] == ' ')
			continue; // 계획을 문자열로 받아서 공백에 대한 처리

		switch (plan[i]) // 받은 문자열에 대한 처리
		{
		case 'R':
			ypos = (ypos == N ? ypos : ypos + 1);
			break;
		case 'L':
			ypos = (ypos == 1 ? ypos : ypos - 1);
			break;
		case 'U':
			xpos = (xpos == 1 ? xpos : xpos - 1);
			break;
		case 'D':
			xpos = (xpos == N ? xpos : xpos + 1);
			break;
		}
	}

	std::cout << xpos << ' ' << ypos;
	return 0;
}
