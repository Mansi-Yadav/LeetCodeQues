class Solution {
public:
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        
        int N= nums.size();
        
         for(int i=0; i<(1<<N); i++){
            vector<int> ds;
            
            for(int j=0; j<N; j++){
                if((i&(1<<j))>0)
                    ds.push_back(nums[j]);
            }
             ans.push_back(ds);
         }
        return ans;
    }
};