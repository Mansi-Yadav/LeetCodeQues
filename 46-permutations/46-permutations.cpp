class Solution {
public:
    void swap(int i, int idx, vector<int> &nums){
        int temp= nums[i];
        nums[i]= nums[idx];
        nums[idx]= temp;
    }
    void func(int idx,vector<int>& nums,  vector<vector<int>>& ans ){
        
        if(idx == nums.size()){
            vector<int> ds;
            for(int i=0; i<nums.size(); i++){
                ds.push_back(nums[i]);
            }
            ans.push_back(ds);
            return ;
        }
        
        for(int i= idx; i<nums.size(); i++){
            swap(i,idx, nums);
            func(idx+1, nums, ans);
            swap(i,idx, nums);
        }
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
         vector<int> ds;
            func(0, nums, ans);
        return ans;
    }
};