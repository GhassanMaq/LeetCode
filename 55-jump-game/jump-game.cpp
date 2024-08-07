class Solution {
public:
    bool canJump(vector<int>& nums) {
        int goal=nums.size()-1;
        int distance=0;
        for(int i=nums.size()-1;i>-1;i--){
            if(i+nums[i]>=goal)
            goal=i;
        }
        if (goal==0) return true;
        else return false;
    }
};