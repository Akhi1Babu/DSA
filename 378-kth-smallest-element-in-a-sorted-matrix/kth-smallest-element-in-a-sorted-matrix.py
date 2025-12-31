class Solution:
    def kthSmallest(self, mat, k):
        # code here
        low=mat[0][0]
        count=0
        ans=0
        high=mat[len(mat)-1][len(mat[0])-1]
        while(low<=high):
            mid=(low+high)//2
            count=0
            
         
            for i in range (0,len(mat)):
                    j=len(mat[0])-1
                    while (j>=0 and mat[i][j]>mid):
                       j-=1
                    count=count+(j+1)
                    
            if(count>=k):
                ans=mid
                high=mid-1
            else:
                low=mid+1            
        return ans                    
        