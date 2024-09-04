#include <bits/stdc++.h>
using namespace std;

struct person{
  int age, idx;
  string name;
};

bool compare(const person& now, const person& last){
  if(now.age != last.age) return now.age < last.age;
  return now.idx < last.idx;
}

int main(){
  
  int n;
  cin >> n;
  person people[100001];
  
  for(int i=0;i<n;i++){
    cin >> people[i].age >> people[i].name;
    people[i].idx = i;
  }
  
  sort(people, people+n,compare);
  
  for(int i=0;i<n;i++){
    cout << people[i].age << " " << people[i].name << "\n";
  }
  
  return 0;
} 
  
  
