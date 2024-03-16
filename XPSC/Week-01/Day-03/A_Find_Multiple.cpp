#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s = a/c;
    int e = b/c;
    if (a % c != 0)
    {
        s++;
    }
    
    if (s * c <= b)
    {
        cout << s*c <<"\n";
    }
    else
    {
        cout << -1 <<"\n";
    }
   
    return 0;
}