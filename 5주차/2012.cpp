#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
    int N;
    cin >> N;

    long long result = 0;

    vector<int> expect;
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        expect.push_back(temp);
    }

    sort(expect.begin(), expect.end());
    for (int i = 0; i < N; i++)
    {
        result += abs(expect[i] - (i + 1));
    }

    cout << result;

    return 0;
}