// https://www.codechef.com/problems/URCALC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a = 0, b = 0;
    char c;
    cin >> a >> b >> c;
    if (c == '+')
        cout << fixed << setprecision(6) << a + b << endl;
    else if (c == '-')
        cout << fixed << setprecision(6) << a - b << endl;
    else if (c == '*')
        cout << fixed << setprecision(6) << a * b << endl;
    else
        cout << fixed << setprecision(6) << (double) a / (double) b << endl;
    return 0;
}