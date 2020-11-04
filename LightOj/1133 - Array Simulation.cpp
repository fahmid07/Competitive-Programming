// LightOj 1133 - Array Simulation

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char ch;
ll size=0;
ll ara[101];
ll i,j,t, n, m, d, y, z;
void summation(ll ara[], ll n, ll d);
void multiEL(ll ara[], ll n, ll d);
void divEl (ll ara[], ll n, ll d);
void _sw_ap_ (ll ara[], ll y, ll z);
int main()
{
    cin >> t;
    for(i=1; i<=t; i++)
    {
        scanf("%lld%lld", &n, &m);
        ll ara[n];
        for(j=0; j<n; j++) scanf("%lld", &ara[j]);
        while(m--)
        {
            cin >> ch;
            switch (ch)
            {
            case 'S':
                scanf("%lld", &d);
                summation(ara,n,d);
                break;
            case 'M':
                scanf("%lld", &d);
                multiEL(ara,n,d);
                break;
            case 'D':
                scanf("%lld", &d);
                divEl(ara,n,d);
                break;
            case 'R':
                reverse(ara,ara+n);
                break;
            case 'P':
                scanf("%lld%lld", &y, &z);
                _sw_ap_(ara,y,z);
                break;
            }
        }
        printf("Case %lld:\n", i);
        for(j=0; j<n; j++){
            if(j==(n-1)) printf("%lld\n", ara[j]);
            else printf("%lld ", ara[j]);
        }
    }
        return 0;
}
    void summation(ll ara[], ll n, ll d)
    {
        ll j;
        for(j=0; j<n; j++) ara[j] += d;
    }
    void multiEL(ll ara[], ll n, ll d)
    {
        ll j;
        for(j=0; j<n; j++) ara[j] *= d;
    }
    void divEl (ll ara[], ll n, ll d)
    {
        ll j;
        for(j=0; j<n; j++) ara[j] /= d;
    }
    void _sw_ap_ (ll ara[], ll y, ll z)
    {
        ll temp;
        temp = ara[y];
        ara[y] = ara[z];
        ara[z] = temp;
    }
