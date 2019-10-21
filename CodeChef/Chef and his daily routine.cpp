// https://www.codechef.com/problems/CHEFROUT

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ull unsigned long long
#define ll long long
#define pb push_back
#define mp make_pair
#define mt make_tuple
#define um unordered_map
#define pii pair <int, int>
#define pll pair <ll, ll>
#define vi vector <int>
#define vl vector <ll>
#define vvi vector <vector <int>>
#define vvl vector <vector <ll>>
#define vpi vector <pii>
#define vpl vector <pll>
#define printvector(a) for (auto i: a) { cout << i << " "; } cout << endl;
#define printpair(a) for (auto p: a){ cout << p.first << " " << p.second << "\t"; } cout << endl;
#define printtuple(a) for (auto t: a){ cout << get <0> (t) << " " << get <1> (t) << " " << get <2> (t) << "\t"; } cout << endl;
#define MOD 1000000007

bool prime(int n)
{
    int l = sqrt(n);
    for (int i = 2; i <= l; i++)
        if (n%i == 0)
            return false;
    return true;
}

class Graph 
{ 
    int V;
    list<int> *adj; 
    
    public:
    
    Graph(int V) 
    { 
        this->V = V; 
        adj = new list<int>[V]; 
    }
    
    void addEdge(int v, int w) 
    { 
        adj[v].push_back(w);
    }
    
}; 
  

// vl v;

// void Sieve (int n) 
// {
//     bool p[n + 1];
//     memset(p, true, sizeof(p));
//     for (int i = 2; i * i <= n; i++)
//     { 
//         if (p[i] == true) 
//         {
//             for (int j = i * i; j <= n; j += i)
//                 p[j] = false;
//         }
//     }
//     for (int i = 2; i <= n; i++) 
//         if (p[i])
//             v.pb(i);
// }

int main()
{
    fastio;
    ll test = 0;
    cin >> test;
    while (test--)
    {
        int fs = 0, fe = 0;
        bool S = false, e = false, ans = true;
        string s;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (!S && s[i] == 'S')
            {
                fs = i;
                S = true;
            }
            if (!e && s[i] == 'E')
            {
                fe = i;
                e = true;
            }
            if (e && S)
                break;
        }
        if (!S)
            fs = l;
        if (!e)
            fe = l;
        for (int i = fs + 1; i < l; i++)
        {
            if (s[i] == 'E' || s[i] == 'C')
            {
                ans = false;
                break;
            }
        }
        for (int i = fe + 1; i < l && ans; i++)
        {
            if (s[i] == 'C')
            {
                ans = false;
                break;
            }
        }
        if (ans)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}