class Solution{
    public:
    long long findMinDiff(vector<long long> packets, long long N, long long M){
    //code
    if (M > N) {
        // More students than packets, not possible
        return -1;
    }

    // Step 1: Sort the array of packets
    sort(packets.begin(), packets.end());

    // Step 2: Initialize the minimum difference to a large number
    int minDiff = INT_MAX;

    // Step 3: Use sliding window to find the minimum difference
    for (int i = 0; i <= N - M; i++) {
        int currentDiff = packets[i + M - 1] - packets[i];
        minDiff = min(minDiff, currentDiff);
    }

    return minDiff;
    }   
};