#include <iostream>
#include <stack>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(int start, vector<int>graph[], bool check[])
{
    stack<int> s;
    s.push(start);
    check[start] = true;
    cout << start << " ";

    while (!s.empty())
    {
        int current_node = s.top();
        s.pop();

        for (int i = 0; i < graph[current_node].size(); i++)
        {
            int next_node = graph[current_node][i];

            if (check[next_node] == false)
            {
                cout << next_node << " ";
                check[next_node] = true;

                s.push(current_node);
                s.push(next_node);
                break;
            }
        }
    }
}

void bfs(int start, vector<int>graph[], bool check[])
{
    queue<int> q;
    q.push(start);
    check[start] = true;

    while(!q.empty())
    {
        int current_node = q.front();
        q.pop();
        cout << current_node << " ";
        for (int i = 0; i < graph[current_node].size(); i++)
        {
            if(check[graph[current_node][i]] == false)
            {
                q.push(graph[current_node][i]);
                check[graph[current_node][i]] = true;
            }
        }
    }
}
int main()
{
    int N, M, V;

    cin >> N >> M >> V;
    
    // 그래프의 구현
    vector<int> *graph = new vector<int>[N+1];
    bool dfs_check[N + 1];
    fill(dfs_check, dfs_check+N+1, false);

    bool bfs_check[N+1];
    fill(bfs_check, bfs_check+N+1, false);

    for (int i = 0; i < M; i++)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;

        graph[temp1].push_back(temp2);
        graph[temp2].push_back(temp1);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    dfs(V, graph, dfs_check);
    cout << "\n";
    bfs(V, graph, bfs_check);

    return 0;
}