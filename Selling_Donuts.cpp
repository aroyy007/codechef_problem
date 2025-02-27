#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
#include <stdlib.h>
#include <time.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;
#define endl '\n'
#define PB push_back
#define coy cout << "YES" << endl;
#define con cout << "NO" << endl;
#define ain(A, NN)              \
    for (ll I = 0; I < NN; I++) \
    cin >> A[I]
using namespace std;

int main()
{
    optimize();
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        
        vi a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];
        
        int sadCount = 0;
        for (int i = 0; i < m; i++) {
            int type = b[i] - 1;
            if (a[type] > 0) {
                a[type]--;
            } else {
                sadCount++;
            }
        }
        
        cout << sadCount << endl;
    }
    
    return 0;
}
