#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int n;
    int maxNum = 0;

    cin >> n;
    int arr[500][500] = {0, };

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cin >> arr[i][k];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (k == 0)
            {
                arr[i][k] = arr[i-1][k] + arr[i][k];
            }
            else if (k == i)
            {
                arr[i][k] = arr[i-1][k-1] + arr[i][k];
            }
            else 
            {
                arr[i][k] = max(arr[i-1][k-1], arr[i-1][k]) + arr[i][k] ;
            }

            maxNum = max(maxNum, arr[i][k]);
        }
    }

    cout << maxNum << "\n";
    
    return 0;
}