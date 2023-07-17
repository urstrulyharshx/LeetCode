//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        list<int> ans;
        vector<int> result;
        int i=0;
        int j=0;
        
        while(j<n)
        {
            //calculations
            if(ans.empty())
                ans.push_back(arr[j]);
            else{
                while(ans.size()>0 && ans.back()<arr[j])
                    ans.pop_back();
                 ans.push_back(arr[j]);
                
            }
                
            
            
            
            //checking if window is hit
            
            if(j-i+1<k)
                j++;
                
            //if window hits
            else if(j-i+1==k){
                //(1)-ans from calculations
                result.push_back(ans.front());
                
                //(2)-slide the window
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
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends