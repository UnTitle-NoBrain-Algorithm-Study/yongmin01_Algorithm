#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    long long arr[n];

    arr[0] = 0, arr[1] = 1;

    if (n == 1)
    {
        cout << arr[1];
    }
    else
    {
        for (int i = 2; i < n+1; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }

        cout << arr[n];
    }

    return 0;
}