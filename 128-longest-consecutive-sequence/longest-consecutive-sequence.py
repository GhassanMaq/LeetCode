from collections import Counter

class Solution(object):
    def longestConsecutive(self, nums):
        if not nums:
            return 0
        longest=0
        temp=0
        numSet=set(nums)
        for n in nums:
            if n-1 not in numSet:
                temp=0
                while n+temp in numSet:
                    temp+=1
            if temp>longest:
                longest=temp
        return longest