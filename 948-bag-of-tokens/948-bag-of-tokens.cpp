class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(), tokens.end());
        
        int st=0;
        int end=tokens.size()-1;
        int s=0;
        while(st<=end){
           if(power>= tokens[st]){
               s++;
               power-=tokens[st];
               st++;
           }
            else{
                if(s>=1 && st != end){
                    power+=tokens[end];
                    s--;
                }
                end--;
            }
        }
        return s;
                  
        
    }
};