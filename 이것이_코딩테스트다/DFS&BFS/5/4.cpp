#include <iostream>
#include <queue>
using namespace std;

int N, M; // 맵 크기 및 탈출구 위치
int map[201][201]; // 맵 정보 배열

int dx[] = { 1, -1, 0, 0 }; // 동서남북 x좌표 이동
int dy[] = { 0, 0, 1, -1 }; // 동서남북 y좌표 이동

int isSafe(int x, int y)
{
    queue<pair<int, int>> q; // 탐색할 좌표 담을 큐
    q.push({ x, y }); // 현재 위치 큐에 삽입

    while (!q.empty()) // 큐가 빌 때까지 반복
    {
        int x = q.front().first; // 큐의 프론트 위치의 첫 번째 요소가 x
        int y = q.front().second; // 큐의 프론트 위치의 두 번째 요소가 y
        q.pop(); // 탐색할 좌표 pop
        for (int i = 0; i < 4; i++)
        {
            // 동서남북 순서대로 다음 좌표 설정
            int nextX = x + dx[i];
            int nextY = y + dy[i];

            // 맵의 범위 벗어나는 경우 제외
            if (nextX < 1 || nextX > N || nextY < 1 || nextY > M)
            {
                continue;
            }

            // 괴물이 있는 곳 제외
            if (map[nextX][nextY] == 0)
            {
                continue;
            }

            // 방문한 적 없는 안전한 길
            if (map[nextX][nextY] == 1)
            {
                map[nextX][nextY] = map[x][y] + 1;
                q.push({ nextX, nextY }); // 다음 좌표 큐에 삽입
            }
        }
    }

    return map[N][M]; // 탈출구 위치의 경로 길이 반환
}

int main()
{
    cin >> N >> M;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= M; j++)
        {
            scanf_s("%1d", &map[i][j]); // 공백구분 없는 입력을 하나씩 받기 위함
        }
    }

    cout << isSafe(1, 1);

    return 0;
}
