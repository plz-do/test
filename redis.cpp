#include <bits/stdc++.h>

using namespace std;
int to_int(string s){
    int ans = 0;
    for(int i = 0; i < s.size(); i++){
        ans = ans*10 + s[i] - '0';
    }
    return ans;
}
string read()
{
    string s;
    cin >> s;
    char op = s[0];
    string res = s.substr(1, s.size() - 1);
    if(op == '-' || op == '+'){
        cout << res << endl;
    } else if(op == ':'){
        cout << to_int(res) << endl;
    } else if(op == '$'){
        int length = to_int(res);
        cin >> s;
        cout << s.substr(0, length) << endl;
    } else if(op == '*'){
        int length = to_int(res);
        if(length == -1){
            cout << "NULL" << endl;
        } else{
            for(int i = 0; i < length; i++){
                res = read();
            }
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    string s;
    while(1){
        read();
        cout << "ok" << endl;
    }
}
