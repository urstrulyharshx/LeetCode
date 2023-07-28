//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    
    long long int countOfSubstringWithKOnes(string S, int K){
        //complete the function here
        unordered_map<int,int>mp;
        
        int sum=0;
        int count=0;
        
        for(int i=0;i<S.size();i++)
        {
            sum+=S[i]-'0';
            
            if(sum==K)
                count++;
            
            if(mp.find(sum-K)!=mp.end())
                count+=mp[sum-K];
            mp[sum]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin >> t;
    while(t--){
       string s;
       int k;
       cin >> s >> k;
       Solution ob;
       cout << ob.countOfSubstringWithKOnes(s, k) << endl;
    }
return 0;
}


// } Driver Code Ends