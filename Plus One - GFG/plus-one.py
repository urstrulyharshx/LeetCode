#User function Template for python3

class Solution:
    def increment(self, arr, N):
        # code here 
        st=""
        for i in range(N):
            st+=str(arr[i])
        temp=str(int(st)+1)
        result=[]
        for i in temp:
            result.append(i)
        return result


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        arr=list(map(int,input().split()))
        
        ob = Solution()
        ptr = ob.increment(arr,N)
        for i in ptr:
            print(i,end=" ")
        print()
# } Driver Code Ends