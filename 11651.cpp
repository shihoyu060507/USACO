#include <bits/stdc++.h>
using namespace std;
struct position{
  int x,y;
};

bool cmp(position p1, position p2){
  
  if(p1.y==p2.y) return p1.x<p2.x;
  
  else return p1.y < p2.y;
}

int main(){
  int n;
  cin >> n;
  position arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i].x >> arr[i].y;
  }
  
  sort(arr,arr+n,cmp);
  
  for(int i=0;i<n;i++){
    cout << arr[i].x << " " << arr[i].y << "\n";
  }
  
  return 0;
}
