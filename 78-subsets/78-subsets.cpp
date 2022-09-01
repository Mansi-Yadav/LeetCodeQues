class Solution {
public:
    void solve(vector<int> &num, vector<int> &ds, int idx, vector<vector<int>> &ans){
        if(idx == num.size()){
            ans.push_back(ds);
            return;
        }
        
        ds.push_back(num[idx]);
        solve(num, ds, idx+1, ans);
        ds.pop_back();
        solve(num, ds, idx+1, ans);
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(nums, ds, 0, ans);
        return ans;
    }
};