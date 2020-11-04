// LightOj 1006 - Hex-a-bonacci

#include <bits/stdc++.h>
 
using namespace std;
const long long N = 10000;
long long a, b, c, d, e, f;
long long ara[N + 7];
long long fn( long long n ) {
    if( n == 0 ) return a;
    if( n == 1 ) return b;
    if( n == 2 ) return c;
    if( n == 3 ) return d;
    if( n == 4 ) return e;
    if( n == 5 ) return f;
    if(ara[n] != -1) return ara[n];
    ara[n] = ( fn(n-1) % 10000007 + fn(n-2) % 10000007 + fn(n-3) % 10000007 + fn(n-4) % 10000007 + fn(n-5) % 10000007 + fn(n-6) % 10000007);
    return ara[n];
}
int main() {
    long long n, caseno = 0, cases;
    scanf("%lld", &cases);
    while( cases-- ) {
        scanf("%lld %lld %lld %lld %lld %lld %lld", &a, &b, &c, &d, &e, &f, &n);
        memset(ara, -1, sizeof(ara));
        printf("Case %lld: %lld\n", ++caseno, fn(n) % 10000007);
    }
    return 0;
}