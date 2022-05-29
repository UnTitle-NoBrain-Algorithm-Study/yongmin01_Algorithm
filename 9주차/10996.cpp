#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for (int k = 1; k <= N; k++)
    {
        if (N == 1)
        {
            cout << "*";
        }
        else if (N % 2 != 0)
        {
            int a = N / 2 + 1;
            int b = N - a;

            for (int i = 1; i <= a; i++)
            {
                cout << "* ";
            }
            cout << "\n";
            for (int i = 1; i <= b; i++)
            {
                cout << " *";
            }
        }
        else if (N % 2 == 0)
        {
            int a = N / 2;
            int b = N - a;

            for (int i = 1; i <= a; i++)
            {
                cout << "* ";
            }
            cout << "\n";
            for (int i = 1; i <= b; i++)
            {
                cout << " *";
            }
        }
        
        if (k != N)
        {
            cout << "\n";
        }
    }
}