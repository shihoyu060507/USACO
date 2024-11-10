#include <iostream>

using namespace std;

int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

bool isLeapYear(int year) {
    if (year % 400 == 0) return true;
    if (year % 100 == 0) return false;
    if (year % 4 == 0) return true;
    return false;
}

int calculateDays(int y, int m, int d) {
    int totalDays = 0;
    for (int i = 1; i < y; i++) {
        totalDays += 365;
        if (isLeapYear(i)) totalDays += 1;
    }
    for (int i = 1; i < m; i++) {
        totalDays += monthDays[i - 1];
        if (i == 2 && isLeapYear(y)) totalDays += 1;
    }
    totalDays += d;
    return totalDays;
}

int main() {
    int y1, m1, d1, y2, m2, d2;
    cin >> y1 >> m1 >> d1 >> y2 >> m2 >> d2;

    int days1 = calculateDays(y1, m1, d1);
    int days2 = calculateDays(y2, m2, d2);

    if (y2 - y1 > 1000 || (y2 - y1 == 1000 && (m2 > m1 || (m2 == m1 && d2 >= d1)))) {
        cout << "gg\n";
    } else {
        cout << "D-" << days2 - days1 << "\n";
    }

    return 0;
}
