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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,x,y;
    cin>>t;
    while(t--)
    {
    int s=0;
    cin>>x>>y;
    int sr=sqrt(x*x+y*y);
    if(x==0 && y==0)
        cout<<0<<endl;
    else
    if (sr*sr==x*x+y*y)
        cout<<1<<endl;
    else
        cout<<2<<endl;
 
 
 
    }
}