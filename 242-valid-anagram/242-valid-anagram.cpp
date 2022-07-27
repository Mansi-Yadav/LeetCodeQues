class Solution {
public:
    bool isAnagram(string s, string t) {
        int n= s.size();
        int m= t.size();
        
        if(n != m)
            return false;
        
        int cnt[26]={0};
        for(int i=0; i<n; i++){
            cnt[s.at(i)- 'a']++;
            
            cnt[t.at(i) - 'a']--;
            
        }
        int si= sizeof(cnt)/sizeof(cnt[0]);
        for(int i=0; i<si; i++){
            if(cnt[i] != 0)
                return false;
        }
        return true;
    }
};