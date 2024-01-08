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
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        ain(a,n);
        
        int c=0;
        int x=a[0];
        
        for(int i=1;i<n;i++)
        {
            if(a[i]<x)
            {
                c++;
            }
            else
            {
                x=a[i];
            }
        }
        cout<<c<<endl;
        
        
    }
    return 0;
}
