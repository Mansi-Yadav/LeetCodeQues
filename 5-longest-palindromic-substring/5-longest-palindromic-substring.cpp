class Solution {
public:
    int expandAroundCentre(string s, int left, int right){
        while(left>=0 && right<s.length() && s.at(left) == s.at(right)){
            left--;
            right++;
        }
        return right-left-1;
    }
    string longestPalindrome(string s) {
        if(s == " " || s.length()<1)
            return "";
        if(s.length() == 1)
            return s;
        
        int start=0;
        int substrL=0;
        for(int i=0; i<s.length(); i++){
            int len1= expandAroundCentre(s, i, i);
            int len2= expandAroundCentre(s, i, i+1);
            int len= max(len1, len2);
            if(len > substrL){
                start= i-(len-1)/2;
                substrL= len;
            }
        }
        return s.substr(start, substrL);
    }
};