#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int N, K, num=0;
  
  cin >> N >> K;
  
  for (int hour = 0; hour <= N; hour++) {
		for (int min=0; min<60; min++){
		  for(int sec=0; sec<60; sec++){
		    if(hour % 10 == K || hour / 10 == K || min % 10 == K || min / 10 == K || sec % 10 == K || sec / 10 == K) {
		      num++;
		    }
	    }
	  }
  }
  
  cout << num;
  
  return 0;
}
