class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> nums_freq;
        for (int i:nums){
            nums_freq[i]++;
        }
        for (const auto& [i,j]:nums_freq) {
            if (nums_freq[i]>1) return true; 
        }
        return false;
    }
};