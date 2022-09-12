class Solution {
public:
    void solve(int idx, int target, vector<int>&nums, vector<int>&path, vector<vector<int>>&res){
        if(target == 0){
            res.push_back(path);
            return;
        }
        if(idx == nums.size()) return;
        
        for(int i = idx; i < nums.size(); i++){
            if(i > idx && nums[i] == nums[i-1]) continue;
            if(nums[i] > target) break;
            path.push_back(nums[i]);
            solve(i+1, target-nums[i], nums, path, res);
            path.pop_back();
        }
        return ;
    }
    vector<vector<int>> combinationSum2(vector<int>& v, int target) {
        int n = v.size();
        
        vector<int>path;
        vector<vector<int>>res;
        sort(v.begin(), v.end());
        
        solve(0, target, v, path, res);
        return res;
        
    }
};
