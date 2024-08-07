class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> kids(candies.size(), false);
        int m = *std::max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies>=m){
                kids[i]=true;
            }
            else kids[i]=false;
        }
        return kids;
    }      
};