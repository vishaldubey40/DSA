#include <bits/stdc++.h>

using namespace std;         // inserting element in graph using adjacency list;
const int N = 1e3 + 10;
vector<int> graph[N];

int main() {
  int n, m;
  cin >> n >>m;
  for(int i=0;i<m;i++){
      int a, b;
      cin >> a >>b;
      graph[a].push_back(b);
      graph[b].push_back(a);
  }
}
