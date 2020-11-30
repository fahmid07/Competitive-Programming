// UVA 11269 - Setting Problems

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;

bool cmp(const pair<lli, lli> a, const pair<lli, lli> b){
    return (a.first + max(a.second, b.first) + b.second) < (b.first  + max(b.second, a.first) + a.second);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, k, x, cr, cnt;
    double d;
    vector<pair<lli, lli>> vec;
    vector<lli> ara;
    while(cin >> n){
        while(n--){
            cin >> x;
            ara.push_back(x);
        }
        cnt = 0;
        n = ara.size();
        for(lli i=0; i<n; i++){
            cin >> x;
            vec.push_back(make_pair(ara[i], x));
        }
        sort(vec.begin(), vec.end(), cmp);
        cnt += (vec[0].first + vec[0].second);
        cr = vec[0].second;

        for(lli i=1; i<n; i++){
            if(cr > vec[i].first){
                cr -= vec[i].first;
                vec[i].first = 0;
            }
            else {
                vec[i].first -= cr;
                cr = 0;
            }

            cnt += (vec[i].first + vec[i].second);
            cr += vec[i].second;
        }
        cout << cnt << endl;
        vec.clear();
        ara.clear();
    }
    return 0;
}
