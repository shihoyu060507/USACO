#include <iostream>

#include <string>

#include <algorithm>

using namespace std;

int main(void)

{
string a, b;
cin >> a >> b;

int y = 0, x = 0;

for (int i = 0; i < a.length(); i++) {
  bool searching = true;

  for(int j=0;j<b.length(); j++) {
    if (a[i] == b[j]) {
      y = i;
      x = j;
      searching = false;
      break;
    }
  }  
  if (!searching) break;
}

for (int i = 0; i < b.length(); i++) {
  for (int j = 0; j < a.length(); j++)
    if (j == y && i != x) cout << b[i];

    else if (i == x) cout << a[j];

    else cout << ".";

    cout<< "\n";
}
return 0;

}
