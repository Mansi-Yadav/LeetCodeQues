#include<cstring>
class Solution {
public:
    bool isAnagram(string s, string t) {
       char arr1[s.size()+1];
        char arr2[t.size()+1];
        if(s.size() != t.size())
            return false;
       
        strcpy(arr1, s.c_str());
        strcpy(arr2, t.c_str());
        
       std::sort(arr1, arr1+s.size()) ;
        std::sort(arr2,arr2+t.size());
        
        for(int i=0; (i<s.size()|| i<t.size()); i++){
            if(arr1[i] != arr2[i])
                return false;
        }
        return true;
    }
};