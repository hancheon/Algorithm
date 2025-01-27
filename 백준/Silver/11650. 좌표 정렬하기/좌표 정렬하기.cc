#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
	if (a.first == b.first)
	{
		return a.second < b.second;
	}
	return a.first < b.first;
}

int main()
{
	int N;
	int posX, posY;
	vector<pair<int, int>> pos;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> posX >> posY;
		pos.push_back(make_pair(posX, posY));
	}

	sort(pos.begin(), pos.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		printf("%d %d\n", pos[i].first, pos[i].second);
	}

	return 0;
}