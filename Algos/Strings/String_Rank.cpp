class Solution {
    public:
        #define MOD 1000003

        void initializeFactorials(int totalLen, vector<int> &fact) {
            long long int factorial = 1;
            fact.push_back(1); // 0!= 1
            for (int curIndex = 1; curIndex < totalLen; curIndex++) {
                factorial = (factorial * curIndex) % MOD;
                fact.push_back(factorial);
            }
            return;
        }

        int findRank(string S) {
            // Initializations
            
            int charCount[256]; // count of characters in S. 
            memset(charCount, 0, sizeof(charCount));
            for (int i = 0; i < S.length(); i++) charCount[S[i]]++;

            vector<int> fact; // fact[i] will contain i! % MOD
            initializeFactorials(S.length() + 1, fact);

            long long int rank =  1;
            for (int i = 0; i < S.length(); i++) {
                // find number of characters smaller than S[i] still left. 
                int less = 0;
                for (int ch = 0; ch < S[i]; ch++) {
                    less += charCount[ch]; 
                }
                rank = (rank + ((long long)fact[S.length() - i - 1] * less)) % MOD;
                // remove the current character from the set. 
                charCount[S[i]]--;
            }
            return rank;
        }
};