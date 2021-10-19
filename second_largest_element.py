class Solution:
    def print2largest(self,A,N): 
        A.sort(reverse=True)
        for i in range(1,N):
            if A[i]!=A[i-1]:
                return A[i]
        return -1
t=int(input())
for i in range(t):
	n=int(input())
	a=list(map(int,input().split()))
	ob=Solution()
	print(ob.print2largest(a,n))