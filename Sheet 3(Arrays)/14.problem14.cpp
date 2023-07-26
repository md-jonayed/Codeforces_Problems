#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int flag = 0;
    if (s.length() == (a + b + 1) && s[a] == '-')
    {
        for (int i = 0; i < (a + b + 1); i++)
        {
            if (i == a)
            {
                continue;
            }
            else if (s[i] >= '0' && s[i] <= '9')
            {
                flag = 1;
            }
            else
            {
                flag = 0;
                break;
            }
        }
    }
    else
    {
        flag = 0;
    }
    if (flag == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}