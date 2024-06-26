from typing import List


class Solution:
    def reverse_string(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        s[:] = [x[::-1] for x in s]

arr = ["Python", "Baseball", "Golf", "Summer" ]
s = Solution()
s.reverse_string(arr)

print(arr)