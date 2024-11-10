#include<iostream>
using namespace std;
char map[100][100];
int n, cnt, row, col;
int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> map[i];

    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {

            if (map[i][j] == '.')
                cnt++;
            else if (map[i][j] == 'X')
            {
                if (cnt >= 2)
                {
                    row++;
                    cnt = 0;
                }
                else
                    cnt = 0;
            }
        }
        if (cnt >= 2)
            row++;
    }
    for (int i = 0; i < n; i++)
    {
        cnt = 0;
        for (int j = 0; j < n; j++)
        {

            if (map[j][i] == '.')
                cnt++;
            else if (map[j][i] == 'X')
            {
                if (cnt >= 2)
                {
                    col++;
                    cnt = 0;
                }
                else
                    cnt = 0;
            }
        }
        if (cnt >= 2)
            col++;
    }
    cout << row << " " << col << endl;
}
