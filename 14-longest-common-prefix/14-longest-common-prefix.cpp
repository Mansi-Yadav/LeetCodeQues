class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        if(str.size() == 0)
            return "";
        
        string ans= str[0];
        for(int i=1; i< str.size(); i++){
            string curr = str[i];
            int j=0; 
            while(j<ans.length() && j<curr.length() && ans[j] == curr[j])
                j++;
            if(j == 0)
                return "";
            
            ans= curr.substr(0,j);
        }
        return ans;
    }
};