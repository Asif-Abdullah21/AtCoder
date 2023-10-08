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

int cnt[102];

int main()
{
    FIO;
    int n,d;
    cin >> n >> d;

    vector<string> v;

    for (int i = 0; i <n; i++)
    {
        string s;
        cin>> s;
        v.push_back(s);
    }

    for (int i = 0; i < n; i++)
    {
        string str = v[i];
        for (int j = 0; j < d; j++)
        {
            if(str[j]=='x') cnt[j] = -1;
        }
        str.clear();
    }

    int ans=0;
    int mx=0;

    for (int i = 0; i < d; i++)
    {
        if(cnt[i]==0)
        {
            ans++;
            mx = max(mx,ans);
        }
        else ans=0;
    }

    // for (int i = 0; i < d; i++)
    // {
    //     cout << cnt[i] << " ";
    // }
    
    // cout << endl;
    cout << mx << endl;
    
     
    return 0;
}
