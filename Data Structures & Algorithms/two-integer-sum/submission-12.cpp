class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> sortedNums;
        for(int i=0; i<nums.size(); i++){
            sortedNums.push_back({nums[i],i});
        }
        sort(sortedNums.begin(),sortedNums.end());
        int i = 0;
        int j = nums.size() - 1;
        while (i<j) {
            int sum = sortedNums[i].first + sortedNums[j].first;
            if(sum==target) {
                return {min(sortedNums[i].second,sortedNums[j].second),
                max(sortedNums[i].second,sortedNums[j].second)};
            }
            else if(sum>target) {
                j--;
            }
            else {
                i++;
            }
        }
        return {};
    }
};
