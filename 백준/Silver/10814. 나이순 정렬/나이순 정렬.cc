#include <iostream>
using namespace std;

struct MEM_INFO
{
	int age;
	char name[101];
};

int main()
{
	int N;
	MEM_INFO* mems = new MEM_INFO[100000];

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> mems[i].age >> mems[i].name;
	}

	for (int i = 1; i <= 200; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == mems[j].age)
			{
				printf("%d %s\n", i, mems[j].name);
			}
		}
	}

	delete[] mems;
}