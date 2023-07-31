//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
public:

void solve(string S,vector<string> &ans, string &op)
{
    if(S.size()==0)
    {
        ans.push_back(op);
        return;
    }
    
    string op1=op;
    string op2=op;
    op1.push_back(' ');
    op1.push_back(S[0]);
    op2.push_back(S[0]);
    S.erase(S.begin()+0);
    solve(S,ans,op1);
    solve(S,ans,op2);
    return;
}
    vector<string> permutation(string S){
        // Code Herestr
        
        vector<string>ans;
        string op="";
        op.push_back(S[0]);
        
        S.erase(S.begin()+0);
        solve(S,ans,op);
        return ans;
    }
};

//{ Driver Code Starts.

int  main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        vector<string> ans;
        Solution obj;
        ans = obj.permutation(S);
        for(int i=0;i<ans.size();i++){
            cout<<"("<<ans[i]<<")";
        }
        cout << endl;
    }
}

// } Driver Code Ends