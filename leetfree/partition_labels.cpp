#include<bits/stdc++.h>
using namespace std;

int main() {
    string S = "ababcbacadefegdehijhklij";
    map<char, pair<int, int>> interval_map;

    for(int i=0; i<S.length(); ++i) {
        if(interval_map.find(S[i])==interval_map.end())
            interval_map[S[i]] = make_pair(i, i);
        
        interval_map[S[i]].second = i;
    }

    vector<pair<int, int>> intervals;

    for(auto i : interval_map) {
        intervals.push_back(i.second);
    }

    sort(intervals.begin(), intervals.end(),
    [](pair<int, int> A, pair<int, int> B){
        return A.second - A.first > B.second - B.first;
    });

    vector<bool> visited(intervals.size(), false);

    for(int i=0; i<intervals.size();i++) {
        if(visited[i]) continue;
        int start = intervals[i].first;
        int end = intervals[i].second;

        for(int j=0; j<intervals.size();j++) {
            if(visited[j] || j==i) continue;
            if(intervals[j].second < start || intervals[j].first > end) continue;

            start = min(start, intervals[j].first);
            end = max(end, intervals[j].second);
            visited[j] = true;
        }
        intervals[i].first = start;
        intervals[i].second = end;
    }

    for(int i=0; i<intervals.size();i++) {
        if(!visited[i]) cout<<intervals[i].first<<" "<<intervals[i].second<<endl;
    }
}
