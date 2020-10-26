// Codeforces 1399 C - Boats Competition

#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<iterator>
#include<algorithm>
#include<stdlib.h>
using namespace std;
typedef long long int lli;

lli maxCountSameSUM(vector<lli> arr, lli n)
{
    lli mx = 0, c=0, x, y, z, a=0;
    set<pair<lli, lli>> s;
    set<pair<lli, lli>>::iterator it;
    pair<lli, lli>p(1,1);
    unordered_map<int, int> M;
    unordered_map<int, int>::iterator it1;

    for (lli i = 0; i < n - 1; i++){
        for (lli j = i + 1; j < n; j++){
            M[(arr[i] + arr[j])]++;
            p = make_pair(i, j);
            s.insert(p);
            if(M[(arr[i] + arr[j])] > mx){
                mx = M[(arr[i] + arr[j])];
                x = arr[i];
                y = arr[j];
            }
        }
    }
     
    for(it1=M.begin(); it1!=M.end(); it1++){
        z = it1->first;
        lli ara[107]={0};
        c = 0;
        for(it=s.begin(); it!=s.end(); it++){
            p = *it;
            x = p.first;
            y = p.second;
            if(arr[x]+arr[y] == z && ara[x]!=1 && ara[y]!=1){
                c++;
                ara[x]=1;
                ara[y]=1;
            }
        }
        a = max(a, c);
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    lli t , n, i, m, mn, mnn, cnt, a, b, z, f;
    double x;
    vector<lli> vec;
    cin >> t;
    while(t--){
        cin >> n;
        m = n;
        while(m--){
            cin >> x;
            vec.push_back(x);
        }
        cout << maxCountSameSUM(vec, n) << endl;
        vec.clear();
    }
    return 0;
}