class Solution {
public:
    
    void merge(vector<int> &arr, int s, int e, int mid){
        
        vector<int> temp(e-s+1);
        int i=s, j=mid+1;
        int k=0;
        
        while(i<=mid && j<=e){
            if(arr[i]<= arr[j]){
                temp[k++]= arr[i++];
            }
            else{
                temp[k++]= arr[j++];
            }
        }
        
        while(i<=mid)
            temp[k++]= arr[i++];
        
        while(j<=e)
            temp[k++]= arr[j++];
        
        for(int i=s; i<=e; i++){
           arr[i]= temp[i-s]; 
        }
    }
    
    void solve(vector<int> &arr, int s, int e){
        if(s>=e)
            return;
        
        int mid= (s+e)/2;
        
        solve(arr, s, mid);
        solve(arr, mid+1, e);
        merge(arr, s, e, mid);
        
    }
    
    vector<int> sortArray(vector<int>& nums) {
        vector<int> ans;
         solve(nums, 0, nums.size()-1);
        return nums;
        
    }
};