//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends




vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    vector<long long> result;
    queue<long long> q;
    for (int i = 0; i < K-1; i++)
    {
        if (A[i] < 0)
        {
            q.push(i);
        }
    }
    for (int i = K-1; i < N; i++)
    {
        if (A[i] < 0)
        {
            q.push(i);
        }
        if (q.empty())
        {
            result.push_back(0);
        }
        else
        {
            int chk = q.front();
            result.push_back(A[chk]);
            if (chk == i + 1 -K)
            {
                q.pop();
            }
        }
    }
    return result;  
 }