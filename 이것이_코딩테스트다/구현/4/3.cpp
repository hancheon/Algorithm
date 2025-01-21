#include <iostream>
#include <string>

int main(void)
{
	std::string pos;
	int xpos;
	int ypos;
	int xBound[] = { 2, 2, -2, -2, 1, 1, -1, -1 }; // 가능한 x좌표 이동 범위
	int yBound[] = { 1, -1, 1, -1, 2, -2, 2, -2 }; // 가능한 y좌표 이동 범위
	int result = 0;

	std::cin >> pos; // 위치 입력 받음

	xpos = pos[0] - 96; // x좌표 숫자로 변환
	ypos = pos[1] - '0'; // y좌표 숫자로 변환

	for (int i = 0; i < 8; i++)
	{
		int nextXpos = xpos + xBound[i];
		int nextYpos = ypos + yBound[i];
		
        // 이동 후 x좌표와 y좌표가 유효한 범위인지 확인
		if (nextXpos >= 1 && nextXpos <= 8 && nextYpos >= 1 && nextYpos <= 8)
			result++;
	}

	std::cout << result;
    return 0;
}
