#include <iostream>

int num2;
int num5;
int num10;

int factorial(int num)
{
    int temp = num;

    if (num == 0)
    {
        return 1;
    }
    else
    {
        while ((temp % 2 == 0) || (temp % 5 == 0))
        {
            if (temp % 2 == 0)
            {
                num2++;
                temp /= 2;
            }

            if (temp % 5 == 0)
            {
                num5++;
                temp /= 5;
            }
        }

        return num * factorial(num - 1);
    }
}

int main()
{
    int N;
    int zeroNum = 0;

    std::cin >> N;

    factorial(N);

    zeroNum = (num2 > num5 ? num5 : num2) - num10;

    std::cout << zeroNum << std::endl;

    return 0;
}