from collections import Counter

class Solution(object):
    def longestConsecutive(self, nums):
        if not nums:
            return 0
        counter = Counter(nums)
        keys = sorted(counter.keys())  
        longest = 1
        temp = 1
        for i in range(len(keys) - 1):
            if keys[i] + 1 == keys[i + 1]:
                temp += 1
            else:
                temp = 1
            longest = max(longest, temp)
        return longest
