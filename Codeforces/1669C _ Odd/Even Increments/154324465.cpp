#include <bits/stdc++.h>
using namespace std;
#define all(v)   ((v).begin()), ((v).end())
#define sz(v)   ((int)((v).size()))
#define clr(v, d)  memset(v, d, sizeof(v))
#define rep(i, v)  for(int i=0;i<sz(v);++i)
#define lp(i, n)  for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n) for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n) for(int i=(j);i>=(int)(n);--i)
 
typedef long long ll;
 
 
int main()
{
 
int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    int a[n];
    bool rep=1;
    lp(i,n)
    {
        cin>>a[i];
        if (i%2==0)
            rep=rep && a[i]%2==a[0]%2;
        if (i%2==1)
            rep=rep && a[i]%2==a[1]%2;
    }
    if (rep)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
}