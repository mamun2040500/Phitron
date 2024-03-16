#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, c=1;
    cin >> a >> b;
       long long ans = 0;
       long long d = a;
    while (d <= b)
    {
        ans++;
        d *= 2;
    }
    cout << ans << endl;
    return 0;
}