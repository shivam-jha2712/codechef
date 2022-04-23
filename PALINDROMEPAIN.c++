#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s1 = "";
        string s2 = "";

        if (x % 2 != 0 && y % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (x == 1 || y == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        else if (x % 2 == 0 && y % 2 == 0)
        {
            for (int i = 0; i < x / 2; i++)
            {
                s1 += 'a';
            }
            for (int i = x / 2; i < (x + y - (x / 2)); i++)
            {
                s1 += 'b';
            }
            for (int i = (x + y - (x / 2)); i < (x + y); i++)
            {
                s1 += 'a';
            }
            cout << s1 << endl;
            for (int i = 0; i < y / 2; i++)
            {
                s2 += 'b';
            }
            for (int i = y / 2; i < (x + y - (y / 2)); i++)
            {
                s2 += 'a';
            }
            for (int i = (x + y - (y / 2)); i < (x + y); i++)
            {
                s2 += 'b';
            }
            cout << s2 << endl;
        }
        else if ((x + y) % 2 != 0)
        {
            if (x % 2 != 0)
            {
                for (int i = 0; i < y / 2; i++)
                {
                    s1 += 'b';
                }
                for (int i = y / 2; i < (x + y - (y / 2)); i++)
                {
                    s1 += 'a';
                }
                for (int i = (x + y - (y / 2)); i < (x + y); i++)
                {
                    s1 += 'b';
                }
                cout << s1 << endl;

                char temp1;
                char temp2;

                temp1 = s1[y / 2];
                s1[y / 2] = s1[(y / 2) - 1];
                s1[(y / 2) - 1] = temp1;

                temp2 = s1[(x + y) - (y / 2)];
                s1[(x + y) - (y / 2)] = s1[(x + y) - (y / 2) - 1];
                s1[(x + y) - (y / 2) - 1] = temp2;
                cout << s1 << endl;
            }

            else if (y % 2 != 0)
            {
                for (int i = 0; i < x / 2; i++)
                {
                    s1 += 'a';
                }
                for (int i = x / 2; i < (x + y - (x / 2)); i++)
                {
                    s1 += 'b';
                }
                for (int i = (x + y - (x / 2)); i < (x + y); i++)
                {
                    s1 += 'a';
                }
                cout << s1 << endl;

                char temp1;
                char temp2;

                temp1 = s1[x / 2];
                s1[x / 2] = s1[(x / 2) - 1];
                s1[(x / 2) - 1] = temp1;

                temp2 = s1[(x + y) - (x / 2)];
                s1[(x + y) - (x / 2)] = s1[(x + y) - (x / 2) - 1];
                s1[(x + y) - (x / 2) - 1] = temp2;
                cout << s1 << endl;
            }
        }
    }
    return 0;
}