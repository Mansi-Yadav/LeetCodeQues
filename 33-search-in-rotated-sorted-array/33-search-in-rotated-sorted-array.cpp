class Solution {
public:

    int search(vector<int>& nums, int target) {
        int st=0; 
        int end= nums.size()-1;
        
        while(st <= end){
            
            int mid= st+(end- st)/2;
            
            if(nums[mid] == target)
                return mid;
            
            if(nums[st] <= nums[mid]){  //check left half is sorted or not
                //check whether target lies between the first and last ele of sorted                 //array or not
                if((nums[st] <= target) && (nums[mid] >= target))   
                    end = mid-1;
                else
                    st= mid+1;
            }
            //right half is sorted
            else{
                
                //check whether target lies between mid and end or not
                //if lies moves start to mid next otherwise left half
                 if((nums[mid] <= target) && (nums[end] >= target))  
                     st= mid+1;
                else
                    end= mid-1;
            }
        }
        return -1;
    }
};