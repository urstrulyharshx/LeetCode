//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k) {
        // your code here
        list<int>ans;
        vector<int>result;
        
        int j=0;
        int i=0;
        while(j<n)
        {
            if(ans.empty())
                ans.push_back(arr[j]);
            else{
                while(ans.size()>0 && ans.back()<arr[j])
                    ans.pop_back();
                ans.push_back(arr[j]);
            }
            
            if(j-i+1<k)
                j++;
            else if(j-i+1==k)
            {
                result.push_back(ans.front());
                
                if(ans.front()==arr[i])
                {
                    ans.pop_front();
                }
                i++;
                j++;
                
                
            }
        }
        return result;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;

    while (t--) {

        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;
        vector<int> res = ob.max_of_subarrays(arr, n, k);
        for (int i = 0; i < res.size(); i++) cout << res[i] << " ";
        cout << endl;
    }

    return 0;
}
// } Driver Code Ends