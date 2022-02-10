// program to check graph contains any cycle or not 

#include <bits/stdc++.h>

using namespace std;

const int N=1e4 + 10;
vector<int> g[N];
bool vis[N];

bool dfs(int vertex, int par){
    vis[vertex]=true;
    bool isLoopexist = false;
    for(auto child : g[vertex]){
        if(vis[child] && child == par) continue;
        if(vis[child]) return true;
        
        isLoopexist |= dfs(child, vertex);
    }
    return isLoopexist;
}

int main() {
    int n, m;
    cin >> n>> m;
    for( int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    bool isLoopexist = false;
    for(int i = 1;i <= n;i++){
        if(vis[i]) continue;
        if(dfs(i,0)){
            isLoopexist = true;
            break;
        }
    }
    cout << isLoopexist;
}
