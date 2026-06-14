class Solution {
public:
void dfs(const vector<int>& nums, int i, vector<int>& subset, vector<vector<int>>& res, int target) {
        if(target == 0) {
            res.push_back(subset);
            return;
        }
        if (target <0 || i >= nums.size()) {
            return;
        }


        subset.push_back(nums[i]);
        dfs(nums, i, subset, res, target - nums[i]);
        subset.pop_back();
        dfs(nums, i+1, subset, res, target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int>subset;
        dfs(nums, 0, subset, ans, target);
        return ans;
    }
};
