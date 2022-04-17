#include <iostream>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    cin >> n;
    vector<int> div;
    
    for(int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            div.push_back(i);
        }
    }
    for (int k = 0; k < div.size(); k++)
    {
        answer += div[k];
    }
    return answer;
}