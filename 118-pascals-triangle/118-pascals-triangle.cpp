class Solution {
public:
    vector<vector<int>> generate(int numRows) {
         vector<vector<int>> ans;
        
        vector<int> prev;
        for(int i=0; i<numRows; i++){
            vector<int> row;
            for(int j=0; j<=i; j++){
                if(j==0 || j==i)
                    row.push_back(1);
                else{
                    row.push_back(prev[j-1]+ prev[j]);
                }
            }
            prev= row;
            ans.push_back(row);
            
        }
        return ans;
    }
};