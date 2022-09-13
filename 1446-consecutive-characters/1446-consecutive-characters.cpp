class Solution {
public:
    int maxPower(string s) {
        char ch= s[0];
        int cnt=0, maxi= INT_MIN;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ch){
                cnt++;
            }
            else{
                ch= s[i];
                cnt=1;
            }
            if(cnt > maxi)
                maxi=cnt;
        }
        return maxi;
    }
};