#include <iostream>
#include <string>
using namespace std;

int main()
{
    string N;
    int sum = 0;

    cin >> N;

    for (int i = 0; i < N.size() / 2; i++)
    {
        sum += N[i] - '0';
    }

    for (int i = N.size() / 2; i < N.size(); i++)
    {
        sum -= N[i] - '0';
    }
    

    if (sum == 0)
        cout << "LUCKY" << endl;
    else
        cout << "READY" << endl;

    return 0;
}
