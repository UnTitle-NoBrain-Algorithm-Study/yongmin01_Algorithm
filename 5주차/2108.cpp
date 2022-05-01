#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() 
{
    int N;
    cin >> N;
    vector<int> arr;
    vector<int> mode_arr(8001, 0);
    int sum = 0;
    int max = 0;

    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
        mode_arr[temp + 4000] +=1;

        sum += arr[i];
    }

    // »ê¼úÆò±Õ
    int avg = round(sum / (double)N);

    sort(arr.begin(), arr.end());
    
    // Áß¾Ó°ª
    int cen = arr[(N-1)/2];

    // ÃÖºó°ª 
    int mode;
    int mode_index;
    for (int i = 0; i < 8001; i++)
    {
        if (mode_arr[i] > max)
        {
            max = mode_arr[i];
            mode_index = i;
        }
    }

    for (int i = mode_index + 1; i < 8001; i++)
    {
        if (mode_arr[i] == max)
        {
            mode_index = i;
            break;
        }
    }

    mode = mode_index - 4000;


    // ¹üÀ§
    int range = arr[N-1] - arr[0];
    
    cout << avg << "\n" << cen << "\n" << mode << "\n" << range;

    return 0;
}