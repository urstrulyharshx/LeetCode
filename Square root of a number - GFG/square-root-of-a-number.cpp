//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int x) 
    {
        // Your code goes here   
        long long start=0;
        long long end=x;
        long long mid=start +(end-start)/2;
        long long ans=-1;
        while(start<=end)
        {
            
            if(mid*mid==x)
                return mid;
            
             if(mid*mid < x)
                 
             {
                ans=mid;
                start=mid+1;
             }
            else
                end=mid-1;
            
        mid=start +(end-start)/2;
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
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends