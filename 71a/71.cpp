#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string a[100];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {

        int length = a[i].length();

        if (length > 10)
        {
            char start = a[i][0];
            char end = a[i][length - 1];

            cout << start << length - 2 << end << endl;
        }
        else
        {
            cout << a[i] << endl;
        }
    }

    return 0;
}