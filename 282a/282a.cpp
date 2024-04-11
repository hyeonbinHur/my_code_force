#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;
    char arr[151][3];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    int x = 0;
    int plus = 0;
    int minus = 0;
    for (int i = 0; i < n; i++)
    {
        int pCount = 0;
        int mCount = 0;
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == '+')
            {
                pCount++;
            }
            if (arr[i][j] == '-')
            {
                mCount++;
            }
            if (j == 2 && pCount == 2)
            {
                plus++;
            }
            if (j == 2 && mCount == 2)
            {
                minus++;
            }
        }
    }

    cout << plus - minus << endl;

    return 0;
}