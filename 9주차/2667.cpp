#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int map[26][26];
bool visited[26][26];
vector<int>v;
int N;
int cnt = 0;
int dir[4][2] = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};

void dfs (int x, int y)
{
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dir[i][0];
        int ny = y + dir[i][1];

        if(nx >= 0 && ny >= 0 && nx <= N && ny <= N)
        {
            if (visited[nx][ny] == false && map[nx][ny] == 1)
            {
                visited[nx][ny] = true;
                cnt ++;
                dfs(nx, ny);
            }
        }
    }
}

int main()
{
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string temp;
        cin >> temp;
        for(int k = 0; k < N; k++)
        {
            map[i][k] = temp[k] - '0';
        }
    }
    
    for(int i = 0; i < N; i++)
    {
        for (int k = 0; k < N; k++)
        {
            if (visited[i][k] == false && map[i][k] == 1)
            {
                visited[i][k] = true;
                cnt ++;
                dfs(i, k);
                v.push_back(cnt);
                cnt = 0;
            }
        }
    }
    cout << v.size() << "\n";
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}