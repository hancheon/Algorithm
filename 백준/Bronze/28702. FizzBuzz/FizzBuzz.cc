#include <iostream>
using namespace std;

int main()
{
    char numString[3][9];
    int num = 0;

    // 입력
    for (int i = 0; i < 3; i++)
    {
        cin >> numString[i];
    }

    for (int i = 0; i < 3; i++)
    {
        if (!isalpha(numString[i][0]))
        {
            num = atoi(numString[i]) + (3 - i);

            if (num % 3 == 0)
            {
                if (num % 5 == 0)
                {
                    printf("FizzBuzz\n");
                }
                else
                {
                    printf("Fizz\n");
                }
            }
            else if (num % 5 == 0)
            {
                printf("Buzz\n");
            }
            else
            {
                printf("%d\n", num);
            }

            break;
        }
    }

    return 0;
}