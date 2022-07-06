class Solution {
public:
    
      void possiblepermute( vector<int> arr, int n,vector<vector<int>> &ans, vector<int> &ds , int freq[]){
        
        if(ds.size()==n){
            ans.push_back(ds);
                return;
        }
       for(int i=0; i<n; i++){
           if(freq[i]==0){
               ds.push_back(arr[i]);
               freq[i]=1;
               possiblepermute( arr, n, ans, ds, freq);
               ds.pop_back();
               freq[i]=0;
           }
       } 
        
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n= nums.size();
      // int arr[n];
      //   for(int i=0; i<n; i++){
      //      arr[i]=i+1; 
      //   }
        
         int freq[n];
        for(int i=0; i<n; i++)
            freq[i]=0;
        
        vector<int> ds;
       vector<vector<int>> ans;
        possiblepermute( nums, n, ans ,ds, freq);
        return ans;
    }
};