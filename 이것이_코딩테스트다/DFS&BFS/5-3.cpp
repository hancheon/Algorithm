#include <iostream>
using namespace std;

int N, M;
int ice[1000][1000];

bool search(int x, int y)
{
	if (x < 0 || x >= N || y < 0 || y >= M)
	{
		return false; // 얼음 틀 밖 좌표 처리
	}

	if (ice[x][y] == 0) // 현재 좌표가 칸막이x인 칸이라면
	{
		ice[x][y] = 1; // 방문처리

		search(x + 1, y); // 동쪽 탐색
		search(x - 1, y); // 서쪽 탐색
		search(x, y + 1); // 남쪽 탐색
		search(x, y - 1); // 북쪽 탐색

		return true; // 탐색이 진행됬으므로 true 반환
	}

	return false; // 탐색 진행되지 않는 좌표 처리
}

int main(void)
{
	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			scanf_s("%1d", &ice[i][j]);
		}
	}

	int cnt = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (search(i, j)) // 탐색 함수 리턴값이 true면 cnt 증가
			{
				cnt++;
			}
		}
	}

	cout << cnt;

	return 0;
}
