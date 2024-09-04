#include <bits/stdc++.h>
using namespace std;
struct race{
  int x,y,z;
};

bool cmp(race r1, race r2){
  
  return r1.x == r2.x ? (r1.y == r2.y ? r1.z < r2.z : r1.y < r2.y): r1.x < r2.x;
  
}

int main(){
  int n;
  cin >> n;
  race arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i].x >> arr[i].y >> arr[i].z;
  }
  
  sort(arr,arr+n,cmp);
  
  for(int i=0;i<n;i++){
    cout << arr[i].x << " " << arr[i].y << " " << arr[i].z << "\n";
  }
  
  return 0;
}
