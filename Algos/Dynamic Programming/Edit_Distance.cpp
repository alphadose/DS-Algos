class Solution {
    public:
        int minDistance(string word1, string word2) {
            // DP talbe, i is the position in word1, and j is the position in word2
            vector<vector<int>> distance(word1.length() + 1, vector<int>(word2.length() + 1, 0));

            // when i or j=0 means empty string, the distance is the length of another string
            for (int i = 0; i < distance.size(); i++) {
                for (int j = 0; j < distance[0].size(); j++) {
                    if (i == 0)
                        distance[i][j] = j;
                    else if (j == 0)
                        distance[i][j] = i;
                }
            }

            // if word1[i] == word2[j], then the distance of i and j is the previous i and j
            // otherwise we either replace, insert or delete a char
            // when insert a char to word1 it means we are trying to match word1 at i-1 to word2 at j
            // when delete a char from word1 it equals to insert a char to word2, which
            // means we are trying to match word1 at i to word2 at j-1
            // when replace a char to word1, then we add one step to previous i and j
            for (int i = 1; i < distance.size(); i++) {
                for (int j = 1; j < distance[0].size(); j++) {
                    if (word1[i - 1] == word2[j - 1])
                        distance[i][j] = distance[i - 1][j - 1];
                    else
                        distance[i][j] = 1 + min(distance[i - 1][j - 1], min(distance[i - 1][j], distance[i][j - 1]));
                }
            }

            return distance[word1.length()][word2.length()];    
        }
};