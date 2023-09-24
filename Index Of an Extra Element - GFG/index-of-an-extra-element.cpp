//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int findExtra(int a[], int b[], int n) {
        // add code here.
        // int bn=b.size();
        // unordered_map<int,int>mp;
        // for(int i=0;i<n;i++)
        // {
        //     mp[a[i]]++;
        // }
        // for(int i=0;i<n;i++)
        // {
        //     if(mp.find(b[i])==mp.end())
        //         return i;
        // }
         int low=0,high=n-1;
        while(low<high){
            int m=(low+high)/2;
            if(a[m]==b[m])low=m+1;
            else high=m;
        }
        return low;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n - 1];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }
        Solution obj;
        cout << obj.findExtra(a, b, n) << endl;
    }
}
// } Driver Code Ends