#include <bits/stdc++.h>
#define   nl         "\n"
#define   nn         (cout << "NO\n")
#define   yy         (cout << "YES\n")
#define   ss         " "
#define   ll         long long
#define   ull        unsigned long long
#define   gcd(a, b)  __gcd(a, b)
#define   lcm(a, b)  ((a/gcd(a,b)) * b)
#define   pii        pair<int,int>
#define   pll        pair<long long,long long>
#define   sz(v)      v.size()
#define   mm(a, x)   memset(a, x, sizeof(a))
#define   FIO        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);


using namespace std;
int main()
{
    FIO;
    ll a,b,c,d;
    cin>>a>>b>>c>>d;

    ll a1=a*c;
    ll a2=a*d;
    ll a3=b*c;
    ll a4=b*d;
    cout<<max({a1,a2,a3,a4})<<endl;

    return 0;
}


