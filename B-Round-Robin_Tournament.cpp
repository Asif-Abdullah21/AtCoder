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

bool cmp(pii a,pii b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second>b.second;
}

int main()
{
    FIO;
    int n;
    cin >> n;

    vector<pii> v;

    for (int i=1;i<=n;i++)
    {
        string s;
        cin >> s;

        int cnt=0;

        for (int j = 0; j < s.size(); j++)
        {
            if(s[j]=='o') cnt++;
        }

        v.push_back({i,cnt});

        sort(v.begin(),v.end(),cmp);
         
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " ";
        //cout << v[i].first << " " << v[i].second<< endl;;
    }

    cout << endl;
    
     
    return 0;
}
