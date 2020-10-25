// Codeforces 1433 D - Districts Connection

#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
typedef long long int lli;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t, n, x, c, f, any;
    set<lli> s;
    vector<lli> vec;
    vector<lli> rm;

    cin >> t;
    while(t--){
        cin >> n;

        while(n--){
            cin >> x;
            vec.push_back(x);
            s.insert(x);
        }

        n = vec.size();
        c = 0;
        f = 0;

        if(s.size()==1) cout << "NO" << endl;
        else{
            cout << "YES" << endl;
            for(lli i=1; i<n; i++){
                if(vec[i]!=vec[0]){
                    cout << 1 << " " << i+1 << endl;
                    any = i+1;
                    c++;
                }
                else{
                    rm.push_back(i);
                }
                if(c==n-1) f = 1;
            }

            if(!f){
                for(lli i=0; i<rm.size(); i++){
                    cout << any << " " << rm[i]+1 << endl;
                    c++;
                    if(c==n-1) break;
                }
            }
        }

        vec.clear();
        s.clear();
        rm.clear();
    }
    return 0;
}
