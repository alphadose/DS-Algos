class Solution:
    # @param A : integer
    # @return a list of integers
    def getRow(self, n):
        line = [1]
        for k in range(n):
            line.append(line[k] * (n-k) / (k+1))
        return line