// https://www.codechef.com/problems/LADDU

#include <iostream>
using namespace std;

int main()
{
    int test = 0;
    cin >> test;
    while (test--)
    {
        int activities = 0, ans = 0;
        cin >> activities;
        string origin;
        cin >> origin;
        for (int i = 0; i < activities; i++)
        {
            string activity;
            cin >> activity;
            if (activity == "CONTEST_WON")
            {
                int rank = 0;
                cin >> rank;
                ans += 300 + max(0, 20 - rank);
            }
            else if (activity == "TOP_CONTRIBUTOR")
            {
                ans += 300;
            }
            else if (activity == "BUG_FOUND")
            {
                int severity;
                cin >> severity;
                ans += severity;
            }
            else if (activity == "CONTEST_HOSTED")
            {
                ans += 50;
            }
        }
        if (origin == "INDIAN")
        {
            ans = ans / 200;
        }
        else if (origin == "NON_INDIAN")
        {
            ans = ans / 400;
        }
        cout << ans << endl;
    }
    return 0;
}