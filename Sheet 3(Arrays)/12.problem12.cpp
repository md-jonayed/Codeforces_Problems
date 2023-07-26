// L. Max Subarray
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        int size;
        cin >> size;
        int a[size];
        for (int j = 0; j < size; j++)
        {
            cin >> a[j];
        }
        for (int k = 0; k < size; k++)
        {
            int mx = a[k];
            for (int l = k; l < size; l++)
            {
                mx = max(mx, a[l]);
                v.push_back(mx);
            }
        }
        for (int m = 0; m < v.size(); m++)
        {
            cout << v[m] << " ";
        }
        v.clear();
        cout << endl;
    }
    return 0;
}