//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
   public:
      int longestKSubstr(string s, int k) {
         // your code here
         vector<int> arr(26, 0);
         int l = 0, r = 0, n = s.size(), ans = -1, uc = 0;
         while (r < n)
         {
            char ch = s[r];
            arr[ch - 'a']++;
            if (arr[ch - 'a'] == 1)
            {
               uc++;
            }
            while (uc > k)
            {
               char ct = s[l];
               arr[ct - 'a']--;
               if (arr[ct - 'a'] == 0)
               {
                  uc--;
               }
               l++;
            }
            
            if (uc == k)
            {
               ans = max(ans, r - l + 1);
            }
            
            r++;

         }
         return ans;
         
      }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends