// P.Minimize Number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0;
    int number;
    cin >> number;
    vector<int> num(number);
    for (int i = 0; i < num.size(); i++)
    {
        cin >> num[i];
    }
    int flag = 0;
    while (true)
    {
        flag = 0;
        for (int i = 0; i < number; i++)
        {
            if (num[i] % 2 == 0)
            {
                num[i] = num[i] / 2;
            }
            else
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {

            count++;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
}
