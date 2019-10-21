// https://www.codechef.com/problems/TYPING

#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int test = 0;
    cin >> test;
    while (test--)
    {
        int n = 0;
        double total = 0;
        cin >> n;
        map <string, double> f;
        for (int i = 0; i < n; i++)
        {   
            double t = 0;
            string s;
            cin >> s;
            if (f[s] != 0)
            {
                t = f[s]/2;
                total += t;
                continue;
            }
            int l = s.length();
            for (int j = 0; j <= l; j++)
            {
                if (j == 0)
                    t += 0.2;
                else if ((s[j] == 'd' || s[j] == 'f') && (s[j-1] == 'j' || s[j-1] == 'k'))
                    t += 0.2;
                else if ((s[j] == 'j' || s[j] == 'k') && (s[j-1] == 'd' || s[j-1] == 'f'))
                    t += 0.2;
                else if ((s[j] == 'd' || s[j] == 'f') && (s[j-1] == 'd' || s[j-1] == 'f'))
                    t += 0.4;
                else if ((s[j] == 'j' || s[j] == 'k') && (s[j-1] == 'j' || s[j-1] == 'k'))
                    t += 0.4;
            }
            f[s] = t;
            total += t;
        }
        cout << total*10 << endl;
    }
}