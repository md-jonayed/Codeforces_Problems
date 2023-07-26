// #include <bits/stdc++.h>
// using namespace std;
// void fib(int num)
// {
//     int a = 0;
//     int b = 1;
//     int c;
//     if (num == 1)
//     {
//         cout << a << endl;
//     }
//     else if (num == 2)
//     {
//         cout << b << endl;
//     }
//     else
//     {
//         for (int i = 3; i <= num; i++)
//         {
//             c = a + b;
//             a = b;
//             b = c;
//         }

//         cout << c << endl;
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     fib(num);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int fib(int num)
// {
//     if (num == 1)
//     {
//         return 0;
//     }
//     else if (num == 2)
//     {
//         return 1;
//     }
//     else
//     {
//         return fib(num - 1) + fib(num - 2);
//     }
// }
// int main()
// {
//     int num;
//     cin >> num;
//     int result = fib(num);
//     cout << result << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long a[n + 1];
    a[0] = 0;
    a[1] = 0;
    a[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << a[n] << endl;

    return 0;
}