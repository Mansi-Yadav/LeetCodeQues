class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n== 2)
            return "11";
        
      
        string s= "11";
        
        for(int i=3; i<=n; i++){
            int cnt=1;
            s= s+'#';
            string res="";
            
            for(int j=1; j<s.length(); j++){
                
                if(s[j] != s[j-1]){
                    res= res+ to_string(cnt)+s[j-1];
                    cnt=1;
                    
                }
                else
                    cnt++;
            }
            s=res;
        }
        return s;
    }
};