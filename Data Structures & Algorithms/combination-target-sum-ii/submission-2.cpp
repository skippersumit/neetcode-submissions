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

        int next = i + 1;
            while (next < nums.size() && nums[next] == nums[i]) {
                next++;
            }


        subset.push_back(nums[i]);
        dfs(nums, i+1, subset, res, target - nums[i]);
        subset.pop_back();
        dfs(nums, next, subset, res, target);
    }

    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int>subset;
        sort(nums.begin(),nums.end());
        dfs(nums, 0, subset, ans, target);
        return ans;
    }
};
