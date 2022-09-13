class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        
        for(int i=0; i<nums.size(); i++){
            if(!m[nums[i]])
                m[nums[i]]=1;
            else 
                m[nums[i]]++;
        }
        
        int idx=0;
        
        for(auto i:m){
            if(i.second<=2){
                int t= i.second;
                while(t--){
                    nums[idx++]= i.first;
                }
            }else{
                int v= 2;
                while(v--){
                    nums[idx++]= i.first;
                }
            }
        }
        return idx;
    }
};