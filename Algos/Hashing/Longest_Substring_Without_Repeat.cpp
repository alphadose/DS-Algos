int Solution::lengthOfLongestSubstring(string A) {
    int maxi = 0;
    int count = 0;
    map<char, int> track;
    for(int i=0;i<A.length();i++) {
        for(int j=i;j<A.length();j++) {
            if(track.find(A[j])!=track.end()) {
                maxi = max(maxi,count);
                count = 0;
                i = track[A[j]];
                track.clear();
                break;
            }
            count++;
            track.insert({A[j],j});
        }
    }
    maxi = max(maxi, count);
    return maxi;
}