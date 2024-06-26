// 55 / 55 test cases passed.
// Status: Accepted
// Runtime: 44 ms
// Memory Usage: 8.6 MB

int max(int a, int b) {
    return a > b ? a : b;
}

int longestOnes(int* nums, int numsSize, int k) {
    // initialize variables
    int left = 0, curr = 0, ans = 0;
    // move right until k 0's then advance left
    for(int right = 0; right < numsSize; right++) {
        if (nums[right] == 0) {
            curr++;
        }
        while (curr > k) {
            if (nums[left] == 0) {
                curr--;
            }
            left++;
        }
        
        ans = max(ans, right - left + 1);
    }
    return ans;
}