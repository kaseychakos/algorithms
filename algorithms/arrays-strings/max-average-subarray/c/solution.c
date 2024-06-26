// 127 / 127 test cases passed.
// Status: Accepted
// Runtime: 139 ms
// Memory Usage: 13.7 MB

// helper function to return the larger value
double max(double a, double b) {
    return a > b ? a : b;
}

// sliding window problem
double findMaxAverage(int* nums, int numsSize, int k) {
    // get initial sum
    double sum = 0.0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    
    // initialize answer with average of nums array less than k
    double ans = sum / k;

    // sliding window to update ans with max average
    for(int i = k; i < numsSize; i++) {
        sum += nums[i] - nums[i-k];
        ans = max(ans, sum / k);
    }
    
    return ans;     
}