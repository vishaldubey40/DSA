#include <bits/stdc++.h>

using namespace std;
const int N=1e4+8;
vector<int> g[N];
  bool vis[N];
 vector<vector<int>> connected_component;
vector<int> temp;
  void dfs(int vertex){
      /* take action on vertex
      ** after entering the vertex
       */
      // cout << vertex <<endl;
       vis[vertex] = true;
       temp.push_back(vertex);
      for(int it: g[vertex]){
        /* take action on child
      ** before entering the child
       */
      // cout <<" par " << vertex << " child " << it << endl;
       if(vis[it])
          continue;
          
          dfs(it);
         /* take action on child
      ** after exiting the child
       */
      }
     /* take action on vertex
      ** before eciting the vertex
       */
  }
 
  int main() {
      int n, m;
      cin >> n >> m;
      for(int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        }
     
     int ct = 0 ;
     for( int i=1;i<=n;i++){
         if(vis[i])
         continue;
         temp.clear();
         dfs(i);
         connected_component.push_back(temp);
         ct++;
     }
    for(auto it:connected_component){
        for(auto tr:it){
            cout << tr <<" ";
        }cout <<endl;
    }
}
