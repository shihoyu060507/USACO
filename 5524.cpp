#include <string>
#include <iostream>
using namespace std;

int main() {
  string s;
  int n;
  cin>>n;
  
  for(int i=0;i<n;i++){
    cin>>s;
    for(int j=0;j<s.size();j++){
      if('A'<=s[j]&&s[j]<='Z'){
        s[j]=s[j]+32;
      }
    }
    cout << s << "\n";
  }
  
  
  return 0;
}
