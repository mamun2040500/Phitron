//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &Arr , int N){
        // code here 
        long l = 0, r = 0, ans = 0, mx = 0;
        while (r < K)
        {
            ans += Arr[r];
            r++;
        }
        // cout << mx << "\n";
        mx = max(mx, ans);
        while (r < N)
        {
            ans = ans + Arr[r] - Arr[l];
            l++;
            r++;
            mx = max(mx, ans);
        }
        // cout << mx << "\n";
        return mx;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends