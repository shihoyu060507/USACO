#include <bits/stdc++.h>

using namespace std;

int n;
vector<pair<int, int>> a;
vector<int> d;

void insertionSort(int idx) {
  pair<int, int> tmp = a[idx];
  int i;
  for (i = idx - 1; i >= 0; i--) {
    if (a[i].first > tmp.first) {
      a[i + 1] = a[i];
    } 
    
    else if (a[i].first == tmp.first && a[i].second > tmp.second) {
      a[i + 1] = a[i];
    } 
    else {
      break;
    }
  }
  a[i + 1] = tmp;
}

int main() {
  cin >> n;
  a.resize(n);
  d.resize(n, 0);

  for (int i = 0; i < n; i++) {
    int t1, t2;
    cin >> t1 >> t2;
    
    if (t1 > t2) {
      a[i] = {t2, t1};
    } 
    else {
      a[i] = {t1, t2};
    }
    insertionSort(i);
  }

  for (int i = 0; i < n; i++) {
    d[i] = 1;
    for (int j = 0; j < i; j++) {
      if (a[i].second >= a[j].second) {
        d[i] = max(d[i], d[j] + 1);
      }
    }
  }

  int result = *max_element(d.begin(), d.end());
  cout << result << endl;

  return 0;
}
