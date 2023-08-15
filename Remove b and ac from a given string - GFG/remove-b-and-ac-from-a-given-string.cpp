//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
  public:
    string stringFilter(string str) 
    { 
        //code here.
       string ans="";
        int i=0;
        while(i<str.length()){
            if(str[i]=='b') i++;
            else if(str[i]=='a' and str[i+1]=='c') i+=2;
            else ans+=str[i++];
        }
        return ans;
        
    } 
};

//{ Driver Code Starts.

int main() 
{
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;
   		
   		Solution ob;
   		cout <<ob.stringFilter(s) << "\n";

   		
   	}

    return 0;
}
// } Driver Code Ends