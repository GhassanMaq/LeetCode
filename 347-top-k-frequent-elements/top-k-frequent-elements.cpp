class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector <int> top;
    unordered_map<int, int> freqMap;
    for(int i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }
        std::priority_queue<std::pair<int, int>> maxHeap;
        for (auto& pair : freqMap) {
            maxHeap.push({pair.second, pair.first});
        }
        std::vector<int> topK;
        for(int i = 0; i < k; i++) {
            topK.push_back(maxHeap.top().second);
            maxHeap.pop();
        }
        
        return topK;
    }
};