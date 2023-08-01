//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends

class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<int>demo;
 		int temp=0;
	int top =0;
	int bottom =n-1;
	int left =0;
	int right =m-1;
	int total=n*m;
	while(temp<total){
	    for(int index=left; index<=right; index++){
	            temp++;
	            
	            demo.push_back(a[top][index]);
	       
	    }
	    top++;
	    
	    
	    for(int index=top ; index<=bottom; index++){
	        temp++;
	            demo.push_back(a[index][right]);
	        
	    }
	    right--;
	    
	    
	    
	    for(int index=right;index>=left;index--)
	    {
	        temp++;
	        demo.push_back(a[bottom][index]);
	    }
	    bottom--;
	    
	    
	    for(int index=bottom;index>=top;index--)
	    {
	        temp++;
	        demo.push_back(a[index][left]);
	    }
	    left++;
	    
	    }
	    
	    return demo[k-1];
	  
 		
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends