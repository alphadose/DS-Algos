class Solution {
    public:
        bool canJump(int A[], int n) {
            int minIndexPossible = n - 1;
            for (int i = n - 2; i >= 0; i--) {
                bool isPossibleFromThisIndex = false;
                if (i + A[i] >= minIndexPossible) {
                    isPossibleFromThisIndex = true;
                    minIndexPossible = i;
                }
                if (i == 0) return isPossibleFromThisIndex;
            }
            return true;
        }
};