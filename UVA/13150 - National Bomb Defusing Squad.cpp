// UVA 13150 - National Bomb Defusing Squad

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, q, x, y, s;
    double r, d, a;
    vector<double> vec;
    vector<double>::iterator it;
    vector<pair<lli, lli>> ara;
    while(true){
        cin >> n >> q;
        if(n==0 && q==0) break;
        for(lli i=0; i<n; i++){
            cin >> x >> y;
            ara.push_back(make_pair(x, y));
        }
        for(lli i=0; i<n; i++){
            for(lli j=0; j<n; j++){
                d = ceil(sqrt(pow(abs(ara[i].first - ara[j].first), 2) + pow(abs(ara[i].second - ara[j].second), 2)));
                vec.push_back(d);
            }
        }
        sort(vec.begin(), vec.end());
        for(lli i=0; i<q; i++){
            cin >> r;
            r *= 1.0;
            it = upper_bound(vec.begin(), vec.end(), r);
            s = it - vec.begin();
            a = (s*1.0) / (n*1.0);
            cout << fixed << setprecision(2) << a << endl;
        }
        cout << endl;
        vec.clear();
        ara.clear();
    }
    return 0;
}
