#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
vector<int> v[100001];
int visited[100001] = {0};
int cnt;
int result[100001] = {0, };
 
void dfs(int x){
    if(visited[x]) return;
    visited[x] = 1;
    cnt++;
    result[x] = cnt;
    for(int i = 0; i < v[x].size(); i++){
        int y = v[x][i];
        dfs(y);
    }
}
 
int main(int argc, const char * argv[]) {
    int N, M, R;
    int a, b;
    
    cin >> N >> M >> R;
    
    for(int i = 0; i < M; i++){
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    for (int i = 1; i < N; i++)
    {
        sort(v[i].begin(), v[i].end());
    }
    
    dfs(R);
    
    for (int i = 1; i <= N; i++)
    {
        cout << result[i] << "\n";
    }
    
    return 0;
}