#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> ch(26, 0);
    for (char c : s)
    {
        ch[c-'a']++;
    }
    bool ans = true;
    for (int i = 0; i < 26; i++)
    {
        if (ch[i] == 0)
        {
            cout << char(i + 'a') << endl;
            ans = false;
            break;
        }
    }
    if (ans)
    {
        cout << "None" << endl;
    }
    return 0;
}