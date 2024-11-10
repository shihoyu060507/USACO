#include <bits/stdc++.h>
using namespace std;

int n,m;
vector<int> graph[10001];
vector<int> visited;
vector<int> hacking; 

int ans=0;

void dfs(int node){
  hacking[node]++;
  ans = max(ans,hacking[node]);
  
  for(int i=0;i<graph[node].size();i++){
    int next_node = graph[node][i];
    if(!visited[next_node]){
      visited[next_node]++;
      dfs(next_node);
    }
  }
}

int main(){
  cin >> n >> m;
  
  int s,e;
  for(int i=0;i<m;i++){
    cin >> s >> e;
    graph[s].push_back(e);
  }
  
  hacking = vector<int> (n+1,0);
  
  for(int i=1;i<=n;i++){
    visited = vector<int> (n+1,0);
    visited[i]++;
    dfs(i);
  }
  
  for(int i=1;i<=n;i++){
    if(hacking[i] == ans){
      cout << i << " ";
    }
  }
  return 0;
}
