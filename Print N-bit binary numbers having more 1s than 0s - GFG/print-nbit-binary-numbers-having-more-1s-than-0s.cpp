//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
    void solve(int N,vector<string> &ans,int one,int zero,string &op){
        
        if(N==0)
        {
            ans.push_back(op);
            return;
        }
        
        string op1=op;
        op1.push_back('1');
        solve(N-1,ans,one+1,zero,op1);
        
        if(one>zero)
        {
            string op2=op;
            op2.push_back('0');
            solve(N-1,ans,one,zero+1,op2);
        }
        return;
        
        
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here
	    vector<string>ans;
	    int one=0;
	    int zero=0;
	    string op="";
	    solve(N,ans,one,zero,op);
	    return ans;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends