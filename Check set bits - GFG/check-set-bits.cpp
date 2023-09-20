//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
   
class Solution{
public:
    int isBitSet(int N){
        // code here
        vector<int>ans;
        if(N==0)
            return 0;
        while(N>0)
        {
            int temp=N%2;
            ans.push_back(temp);
            N=N/2;
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]!=1)
                return 0;
        }
        return 1;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.isBitSet(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends