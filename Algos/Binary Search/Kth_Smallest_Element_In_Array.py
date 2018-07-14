class Solution:
    # @param A : tuple of integers
    # @param B : integer
    # @return an integer
    def kthsmallest(self, A, B):
        k = B
        count = 0
        start = min(A)
        end = max(A)
    
        
        while True:
            mid = (start+end)//2
            count_smaller = 0
            count_smaller_equal = 0
            for num in A:
                if num < mid:
                    count_smaller += 1
                if num <= mid:
                    count_smaller_equal += 1
            
            if count_smaller_equal >=k and count_smaller < k:
                return mid
            
            elif count_smaller >= k:
                end = mid - 1
            
            else:
                start = mid + 1