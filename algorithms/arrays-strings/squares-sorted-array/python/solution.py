# 137 / 137 test cases passed.
# Status: Accepted
# Runtime: 160 ms
# Memory Usage: 18.5 MB

from typing import List

class Solution:
    def sorted_squares(self, nums: List[int]) -> List[int]:
        return sorted([x**2 for x in nums])