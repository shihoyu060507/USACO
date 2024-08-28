#include <iostream>
#include <string>
using namespace std;

int main() {
  int jcnt=0,icnt=0;
  string s;
  cin >> s;
  
  for(int i=0;i<s.size();i++){
    if(s[i]=='J' && s[i+1]=='O' && s[i+2]=='I'){
      jcnt++;
    }
    if(s[i]=='I' && s[i+1]=='O' && s[i+2]=='I'){
      icnt++;
    }
  }
  
  printf("%d\n%d",jcnt,icnt);
  
  return 0;
}
