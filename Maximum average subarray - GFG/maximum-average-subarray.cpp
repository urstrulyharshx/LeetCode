//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
     
     if(k>n)
            return(-1);
        vector<long long int> dp(n,0);
        dp[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            dp[i]=arr[i]+dp[i-1];
        }
        long long int maxv=dp[k-1];
        int maxi=0;
        
        for(int i=1;(k+i-1)<n;i++)
        {
            long long int c=dp[k+i-1]-dp[i-1];
            if(maxv<c)
            {
                maxv=c;
                maxi=i;
                
            }
            
        }
        return(maxi);
     
        // code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends