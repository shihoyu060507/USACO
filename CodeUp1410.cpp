#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  int a=0,b=0;
  
  cin >> s;
  
  for(int i=0;i<s.size();i++){
    if (s[i]=='(') {
      a+=1;
    }
    if (s[i]==')') {
      b+=1;
    }
  }
  
  cout << a << " " << b;
  
  return 0;
}
