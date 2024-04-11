#include <iostream>

using namespace std;

int main(void)
{

    int n;
    cin >> n;
    int num[101][101];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> num[i][j];
        }
    }

    int ans = 0;
    int x = 0, y = 0, z = 0;

    for (int k = 0; k < 3; k++)
    {
        for (int i = 0; i < n; i++)
        {
            if (k == 0)
            {
                x += num[i][k];
            }else if (k == 1){
                y += num[i][k];
            }else if(k ==2){
                z += num[i][k];
            }
        }
    }

    if (x == 0 && y == 0&& z== 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}