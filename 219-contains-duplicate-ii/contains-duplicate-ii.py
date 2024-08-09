class Solution(object):
    def containsNearbyDuplicate(self, nums, k):
        temp={}
        for i in range (len(nums)):
            if nums[i] in temp:
                if(abs((temp[nums[i]])-i))<=k:
                    return True
            temp[nums[i]]=i
        return False

    