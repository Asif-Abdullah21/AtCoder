#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    int n;
    cin >> n;

    ll sum =0;

    for (int i = 1; i <= n*7; i++)
    {
        int x;
        cin >> x;
        
        sum += x;
        if(i%7==0)
        {
            cout << sum << " ";
            sum = 0;
        }
    }

    cout << endl;
    
     
    return 0;
}
