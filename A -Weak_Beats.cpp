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
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    string s; cin >>s;
    int f=1;


    for (int i = 0; i < s.size(); i++)
    {
        if(i%2){
            if(s[i]!='0'){
                f=0;
                break;
            }
        }
    }

    if(f) cout << "Yes\n";
    else cout << "No\n";
    
     
    return 0;
}
