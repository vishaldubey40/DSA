//to find height  and depth of tree using dfs

#include <bits/stdc++.h>

using namespace std;

const int N=1e4+8;

vector<int> g[N];
vector<int> height(N);
vector<int> depth(N);

void dfs(int vertex, int par=0){
    for(auto child:g[vertex]){
        if(child == par) continue;
        depth[child] = depth[vertex] + 1;
        dfs(child,vertex);
        height[vertex] = max(height[vertex],height[child]+1);
    }
}

int main() {
    int n, m;
    cin >> n ;
    for(int i=0;i<n;i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
    }
    dfs(1);
    for(int i=1;i<=n;i++){
        cout << depth[i] <<" " <<height[i]<<endl;
    }
}
