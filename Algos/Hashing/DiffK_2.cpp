class Solution {
    public:
        int diffPossible(const vector<int> &num, int diff) {
            if (num.size() < 2 || diff < 0) return false;
            unordered_set<int> S;
            for (int i = 0; i < num.size(); i++) {
                int aj = num[i] - diff;
                int ai = num[i] + diff;
                if (S.find(aj) != S.end()) return true;
                if (S.find(ai) != S.end()) return true;
                S.insert(num[i]);
            }
            return false;
        }
};