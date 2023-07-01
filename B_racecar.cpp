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
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int n;
    cin >> n;

    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        v.push_back(s);
    }

    bool flag = false;


    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v[i] != v[j])
            {
                string str = v[i] + v[j];
               // cout << str << endl;
                    int f = 0;
                for (int k = 0, l = str.size() - 1; k < l; k++, l--)
                {
                    if (str[k] != str[l])
                    {
                        f = 1;
                        break;
                    }
                }
                if(f==0)
                {
                    flag = true;
                    break;
                }
            }
        }
    }

    if (flag)
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}



/*
muhammad_sayem:

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int n, i, j;
    cin >> n;

    string str[n+5];

    for(i=0; i<n; i++){
        cin >> str[i];
    }

    bool flag = false;

    for(i=0; i<n-1; i++){
        for(j=0; j<n; j++){
            if(i != j){
                string s1 = str[i] + str[j];
                string s2 = s1;
                reverse(s2.begin(), s2.end());
                if(s2 == s1){
                    flag = true;
                }
            }
        }
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}


*/