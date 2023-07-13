//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[])
    {
        // map<int,bool> mp;
    //     for(int i=0;i<n;i++)
    //     {   
            
    //         mp.insert({arr[i],true});
    //         if(mp.find(arr[i])==mp.end());
    //         {
    //             return true;
    //         }
    //         // mp.insert({arr[i],true});
            
    //     }
    //     return false;
    // }
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    // unordered_map<int>m;
    // for(auto& it:mp){
    //     if(m.count(it.second))
    //         return false;
    //     else
    //         m.insert(it.second);
    // }
    // return true;
    set<int>s;
    for(auto it:mp)
    {
        s.insert(it.second);
    }
    
    if(s.size()==mp.size())
        return true;
    return false;
    
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        bool ans=ob.isFrequencyUnique(n,arr);
        if(ans)
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}
// } Driver Code Ends