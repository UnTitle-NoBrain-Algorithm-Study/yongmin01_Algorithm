#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    vector<int> result;

    vector<int> arr;
    for (int i = 1; i <= N; i++)
    {
        arr.push_back(i);
    }

    while (arr.size() != 0)
    {
        result.push_back(arr.front());
        arr.erase(arr.begin());
        arr.push_back(arr.front());
        arr.erase(arr.begin());
    }

    for (int i = 0; i < N; i++)
    {
        cout << result[i] << " ";
    }


    return 0;
}