#include <iostream>
using namespace std;

int main() { 
	int N;                                
	string word;              
	int count = 0;               

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> word;
        
		bool alphabet[26] = { false, };        
		alphabet[(int)(word[0]) - 97] = true;  

		for (int i = 1; i < word.size(); i++) {
			if (word[i] == word[i - 1]) {
				continue;
			}
            
			else if(word[i] != word[i - 1] 
            		&& alphabet[(int)(word[i]) - 97] == true){
				count++;	
				break;
			}
            
			else {
				alphabet[(int)(word[i]) - 97] = true;
			}
		}
	}

	// 그룹 단어의 개수 = 전체단어의 개수 - 그룹단어가 아닌 단어의 개수
	cout << N - count;

	return 0;
}
