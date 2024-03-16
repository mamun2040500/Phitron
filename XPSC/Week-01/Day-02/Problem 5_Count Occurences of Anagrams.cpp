//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
        vector<int> cld(26,0);
        vector<int> txcnt(26,0);
        int ans = 0;
        for (char ch : pat)
        {
            cld[ch - 'a']++;
        }
        int k = pat.size();
        int m = txt.size();
        for (int i = 0; i < k; i++)
        {
            if (cld[txt[i] - 'a'] != 0)
            {
                txcnt[txt[i] - 'a']++;
            }
        }
        if (cld == txcnt)
        {
            ans++;
        }
        for (int i = k; i < m; i++)
        {
            if (cld[txt[i-k] - 'a'] != 0)
            {
                txcnt[txt[i-k] - 'a']--;
            }
            if (cld[txt[i] - 'a'] != 0)
            {
                txcnt[txt[i] - 'a']++;
            }
            
            if (cld == txcnt)
            {
                ans++;
            }
        }
        return ans;
	}
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends