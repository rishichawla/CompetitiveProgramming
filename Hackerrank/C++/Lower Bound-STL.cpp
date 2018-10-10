// https://www.hackerrank.com/challenges/cpp-lower-bound/problem
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int q = 0;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int t = 0, j = 0;
        cin >> t;
        vector<int>::iterator it;
        it = lower_bound(v.begin(), v.end(), t);
        if (*it == t)
        {
            cout << "Yes " << (it - v.begin()) + 1 << endl;
        }
        else
        {
            cout << "No " << (it - v.begin()) + 1 << endl;
        }
    }
    return 0;
}
