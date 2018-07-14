class Solution {
public:
    int minimize(const vector<int> &a, const vector<int> &b, const vector<int> &c) {
        int diff = INT_MAX;
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int i, j, k;
        for(i = 0, j = 0, k = 0; i < a.size() && j < b.size() && k < c.size();) {
            minimum = min(a[i], min(b[j], c[k]));
            maximum = max(a[i], max(b[j], c[k]));
            diff = min(diff, max - min);
            if (diff == 0) break;
            if (a[i] == minimum) i++;
            else if (b[j] == minimum) j++;
            else k++;
        }
        return diff;
    }
};