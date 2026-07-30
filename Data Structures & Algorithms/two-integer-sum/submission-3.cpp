class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> index;
        int i=1;
        for(int num:nums) {
            index[num] = i++;
        }
        for(int i=0;i<nums.size();i++) {
            if(index.count(target-nums[i]) && i!=index[target-nums[i]]-1) {
                return {i,index[target-nums[i]]-1};
            }
        }
        
    }
};
