# 122 / 122 test cases passed.
# Status: Accepted
# Runtime: 124 ms
# Memory Usage: 17.8 MB

from typing import List

class Solution:
    def missing_number(self, nums: List[int]) -> int:
        hashmap = {value: key for key, value in enumerate(nums)}
        for i in range(len(nums)):
            if i not in hashmap:
                return i
        return len(nums)