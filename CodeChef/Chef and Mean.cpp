// https://www.codechef.com/problems/CHFM

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
        int n = 0;
        cin >> n;
        ll a[n], s = 0;
        map <ll, int> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
            if (!m[a[i]])
                m[a[i]] = i + 1;
        }
        if (s % n == 0 && m[s/n])
            cout << m[s/n] << "\n";
        else
            cout << "Impossible\n";
    }
    return 0;
}