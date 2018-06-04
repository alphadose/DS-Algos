/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<Interval> ans;
    Interval med = new Interval();
    for(int i=0;i< intervals.size();i++) {
        if(intervals[i].end < newInterval.start || intervals[i].start > newInterval.end)
            ans.push_back(intervals[i]);
        else if(intervals[i].start <= newInterval.start && intervals[i].end >= newInterval.end){
            med.start=intervals[i].start;
        }
        else if(intervals[i].end >= newInterval.end && intervals[i].start <= newInterval.end) {
            med.end=intervals[i].end;
            ans.push_back(med);
        }
    }
    return ans;
}