// LightOj 1113 - Discover the Web

#include<bits/stdc++.h>
#include<stack>
using namespace std;
typedef long long int lli;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    lli t;
    string str, cmd;

    cin >> t;
    for(lli i=1; i<=t; i++){

        string init="http://www.lightoj.com/";
        stack<string> forward;
        stack<string> current;

        current.push(init);

        cout << "Case" << " " << i << ":" << endl;
        while(true){
            cin >> cmd;

            if(cmd=="VISIT"){
                cin >> str;
                current.push(str);
                cout << str << endl;
                while(!forward.empty()) forward.pop();
            }
            else if(cmd=="BACK"){
                if(current.top() == init) cout << "Ignored" << endl;
                else{
                    forward.push(current.top());
                    current.pop();
                    cout << current.top() << endl;
                }
            }
            else if(cmd=="FORWARD"){
                if(forward.size() == 0) cout << "Ignored" << endl;
                else{
                    cout << forward.top() << endl;
                    current.push(forward.top());
                    forward.pop();
                }
            }
            else if(cmd=="QUIT") break;
        }
    }
    return 0;
}
