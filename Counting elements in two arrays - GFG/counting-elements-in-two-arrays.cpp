//{ Driver Code Starts
// C++ implementation of For each element in 1st 
// array count elements less than or equal to it
// in 2nd array
#include <bits/stdc++.h>
 
using namespace std;


// } Driver Code Ends
// function to count for each element in 1st array,
// elements less than or equal to it in 2nd array
class Solution{
  public:
  
    int solve(int *arr,int n,int target){
        int start=0;
        int end=n-1;
        
        while(start<=end){
            
            int mid=start+(end-start)/2;
            if(arr[mid]<=target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
            
            
        }
        return start;
    }
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
    //Your code goes here
    sort(arr2,arr2+n);
    vector<int> ans(m,0);
    for(int i=0;i<m;i++){
        int element=solve(arr2,n,arr1[i]);
        ans[i]=element;
    }
    return ans;
    
    
   
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[m],arr2[n];
        for(int i=0;i<m;i++)
        cin>>arr1[i];
        for(int j=0;j<n;j++)
        cin>>arr2[j];
        Solution obj;
        vector <int> res = obj.countEleLessThanOrEqual(arr1, arr2, m, n);
        for (int i = 0; i < res.size (); i++) cout << res[i] << " ";
        
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends