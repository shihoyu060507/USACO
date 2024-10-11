#include <iostream>
#include <cmath>
#include <algorithm>
#include <iomanip>  

using namespace std;

double calc_line(int x, int y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

int main() {
    int x_a, y_a, x_b, y_b, x_c, y_c;
    cin >> x_a >> y_a >> x_b >> y_b >> x_c >> y_c;

    bool isTrue = true;

    if (x_a == x_b) {
        if (x_b == x_c) {
            cout << fixed << setprecision(9) << -1.0 << "\n";
            isTrue = false;
        } else {
            isTrue = true;
        }
    } else if (y_c == (y_b - y_a) * 1.0 / (x_b - x_a) * (x_c - x_a) + y_a) {
        cout << fixed << setprecision(9) << -1.0 << "\n";
        isTrue = false;
    }

    if (isTrue) {
        double ab = calc_line(x_a - x_b, y_a - y_b);
        double ac = calc_line(x_a - x_c, y_a - y_c);
        double bc = calc_line(x_b - x_c, y_b - y_c);

        double result = (max({ab, ac, bc}) - min({ab, ac, bc})) * 2;
        cout << fixed << setprecision(9) << result << "\n";
    }

    return 0;
}
