#include <iostream>
#include <cmath>
using namespace std;

bool isPrimeNumber (int n)
{
    if (n == 1)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else
    {
        for (int i = 2; i <= (int)sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    int N;
    cin >> N;
    int temp, result = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        if (isPrimeNumber(temp))
        {
            result += 1;
        }
    }
    cout << result;

    return 0;
}