class Solution {
public:
    int strStr(string haystack, string needle) {
        int l2= needle.size();
        int l1= haystack.size();
        int idx, j,i;
        if(l2 == 0)
            return 0;
        bool flag= false;
        for( i=0; i<(l1+1-l2) ; i++){
            string temp="";
            j=0;
            
            while(j<l2 && i<l1) {
                if(haystack[i+j] != needle[j])
                    break;
            
                if(j== l2-1)
                    return i;
                
                j++;
                  
            }
           
            
        }
        return -1;
    }
};