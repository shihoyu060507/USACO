#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  
  cin >> s;
  
  for(int i=0;i<s.size();i++){
    if('A'<=s[i] && s[i]<='Z'){
      printf("%c",s[i]);
    }
  }
  
  return 0;
}
