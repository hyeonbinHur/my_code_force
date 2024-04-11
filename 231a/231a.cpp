#include <iostream>

using namespace std;

int main(void)
{
    int n;
    int array[1001][1001];

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> array[i][j];
        }
    }
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int oneCount = 0;

        for (int j = 0; j < 3; j++)
        {

            if (array[i][j] == 1)
            {
                oneCount += 1;
            }
            if (j == 2 && oneCount >= 2)
            {
                ans += 1;
            }
        }
    }

    cout << ans << endl;

    return 0;
}