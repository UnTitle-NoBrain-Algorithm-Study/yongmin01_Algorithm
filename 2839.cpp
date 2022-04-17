#include <iostream>

using namespace std;

int sugar (int n)
{
    int quot5 = n / 5;
    int answer;

    while (true)
    {
        if (quot5 < 0) // quot5°¡ 0ÀÌ¸é?
        {
            return -1;
        }
        else
        {
            if ((n - 5*quot5) % 3 == 0)
            {
                answer = quot5 + (n - 5*quot5) / 3;
                return answer;
            }
            quot5 -= 1;

        }
    }
}

int main()
{
    int N;
    cin >> N;
    cout << sugar(N);

    return 0;
}