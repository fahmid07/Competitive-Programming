// LightOj 1109 - False Ordering

#include<bits/stdc++.h>
#include<math.h>
using namespace std;
typedef long long int lli;

int solve(int n)
{
    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (int i = p * 2; i < n; i += p)
                hash[i] = false;

    int total = 1;
    for (int p = 2; p <= n; p++) {
        if (hash[p]) {
            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                total = total * (count + 1);
            }
        }
    }
    return total;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, min, j;
    lli ara[1007];
    vector<lli> vec;

    for(lli i=1; i<=1000; i++) ara[i] = solve(i);

    for(lli i = 1; i < 36; i++){
        for(lli j =1000; j >= 1; j--){
            if(ara[j]==i) vec.push_back(j);
        }
    }

    cin >> t;
    for(lli i=1; i<=t; i++){
        cin >> n;
        cout << "Case" << " " << i << ": " << vec[n-1] << endl;
    }
    return 0;
}
