class Solution {
    public:
        void constructPaths(string start, string &end, unordered_map<string, vector<string> > & parents, vector<string> &current, vector<vector<string> > &answer) {
            if (start == end) {
                answer.push_back(current);
                return;
            }
            for (int i = 0; i < parents[start].size(); i++) {
                current.push_back(parents[start][i]);
                constructPaths(parents[start][i], end, parents, current, answer);
                current.pop_back();
            }
            return;
        }

        vector<vector<string> > findLadders(string start, string end, vector<string> &dictV) {
            unordered_set<string> dict(dictV.begin(), dictV.end());
            vector<vector<string> > answer; 
            unordered_map<string, int> distance; // store the distance from start to the current word
            queue<string> q; // FIFO for bfs purpose
            unordered_map<string, vector<string> > parents;
            swap(start, end); // We do this because we construct the path later from end to start 
            distance[start] = 1;
            q.push(start);
            while (!q.empty()) {
                string word = q.front(); 
                q.pop();
                if (word == end) break;
                for (int i = 0; i < word.size(); i++) {
                    for (int j = 0; j < 26; j++) {
                        string newWord = word;
                        newWord[i] = 'a' + j;
                        if (dict.find(newWord) != dict.end()) {
                            if (distance.find(newWord) == distance.end()) { // seen for the first time
                                distance[newWord] = distance[word] + 1;
                                q.push(newWord);
                                parents[newWord].push_back(word);
                            } else if (distance[newWord] == distance[word] + 1) {
                                parents[newWord].push_back(word);
                            }
                        }
                    }
                }
            }
            if (distance.find(end) == distance.end()) return answer; // not found
            // backtrack and construct all possible paths now that we know possible optimal parents.  
            vector<string> current;
            current.push_back(end);
            constructPaths(end, start, parents, current, answer);
            return answer; 
        }
};