class Solution {
public:
    void solve(vector<int> & num, int idx,  vector<vector<int>> &ans){
        if(idx == num.size()){
            ans.push_back(num);
            return;
        }
        
        for(int i= idx; i<num.size(); i++){
            swap(num[i], num[idx]);
            solve(num, idx+1, ans);
            swap(num[i], num[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> ds;
        solve(nums, 0,  ans);
        return ans;
    }
};