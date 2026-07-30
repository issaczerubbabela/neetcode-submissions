class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int a:nums) {
            freq[a]++;
        }
        for(auto& [key, value]:freq) {
            if(value>1) {
                return true;
            }
        }
        return false;
    }
};