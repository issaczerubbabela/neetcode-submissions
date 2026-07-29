class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int i=0;
        bool dup=false;
        for(;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                if (nums[j]==nums[i]){
                    dup=true;
                }
            }
        }
        return dup;
    }
};