class Solution {
public:
    void func(int idx, int target, vector<int>& candidates, vector<int>& ds,vector<vector<int>> &ans){
        if(idx == candidates.size() ){
            if(target==0)
               ans.push_back(ds);
            return; 
        }
        
           
        
        
        if(candidates[idx]<= target){
            ds.push_back(candidates[idx]);
            func(idx, target-candidates[idx],candidates, ds, ans);
            ds.pop_back();
        }

        func(idx+1, target, candidates, ds, ans);
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        func(0,target, candidates, ds, ans);
        return ans;
    }
};