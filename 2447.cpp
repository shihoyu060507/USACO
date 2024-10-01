#include <iostream>
using namespace std;

int main() {
    int num;
    cin >> num;

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            int row = i;
            int col = j;
            bool isBlank = false;

            while (row > 0 || col > 0) {
                if (row % 3 == 1 && col % 3 == 1) {
                    isBlank = true;
                    break;
                }
                row /= 3;
                col /= 3;
            }

            if (isBlank)
                cout << ' ';
            else
                cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
