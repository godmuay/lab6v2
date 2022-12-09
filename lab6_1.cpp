#include <iostream>
using namespace std;

int main()
{
    int x, y = 0, n = 0, m = 0;

    while (y >= 0)
    {
        cout << "Enter an integer: ";
        cin >> x;
        if (x == 0)
        {
            y = -5;
        }
        else
        {
            if (x % 2 == 0)
            {
                n += 1;
            }
            else
            {
                m += 1;
            }
            y += 1;
        }
    }

    cout << "#Even numbers = " << n << "\n";
    cout << "#Odd numbers = " << m;
    return 0;
}