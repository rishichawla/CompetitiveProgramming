// https://www.codechef.com/problems/NW1

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
        int n = 0, d = 0;
        cin >> n;
        string s;
        cin >> s;
        if (s == "mon")
            d = 0;
        else if (s == "tues")
            d = 1;
        else if (s == "wed")
            d = 2;
        else if (s == "thurs")
            d = 3;
        else if (s == "fri")
            d = 4;
        else if (s == "sat")
            d = 5;
        else if (s == "sun")
            d = 6;
            
        if (n == 28)
            cout << "4 4 4 4 4 4 4\n";
        else if (n == 29)
        {
            for (int i = 0; i < 7; i++)
            {
                if (i == d)
                    cout << "5 ";
                else
                    cout << "4 ";
            }
            cout << "\n";
        }
        else if (n == 30)
        {
            for (int i = 0; i < 7; i++)
            {
                if (i == d || i == (d + 1) % 7)
                    cout << "5 ";
                else
                    cout << "4 ";
            }
            cout << "\n";
        }
        else if (n == 31)
        {
            for (int i = 0; i < 7; i++)
            {
                if (i == d || i == (d + 1) % 7 || i == (d + 2) % 7)
                    cout << "5 ";
                else
                    cout << "4 ";
            }
            cout << "\n";
        }
    }
    return 0;
}