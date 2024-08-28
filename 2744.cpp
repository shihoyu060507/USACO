#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  
  cin >> s;
  
  for(int i=0;i<s.size();i++){
    if('a' <= s[i] && s[i] <= 'z') {
      printf("%c",s[i]-32);
    }
    else if('A' <= s[i] && s[i] <= 'Z') {
      printf("%c",s[i]+32);
    }
    else{
      printf("%c",s[i]);
    }
  }
  
  return 0;
}
