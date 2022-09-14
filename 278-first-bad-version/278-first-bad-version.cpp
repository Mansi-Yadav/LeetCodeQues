// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int ans=0;
        while(!isBadVersion(ans)){
            ans++;
        }
        
        return ans;
    }
};