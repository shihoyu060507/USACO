#include <bits/stdc++.h>
using namespace std;
struct word{
  string a,b;
};

int cmp(string a, string b){
  if (a.length() == b.length()) return a<b;
  
  else return a.length() < b.length();
}

string word[20000];

int main(){
  int n;
  cin >> n;
  
  for(int i=0;i<n;i++){
    cin >> word[i];
  }
  
  sort(word,word+n,cmp);
  
  for(int i=0;i<n;i++){
    if(word[i]==word[i-1]) continue;
    
    else cout << word[i] << "\n";
  }
  
  return 0;
}
