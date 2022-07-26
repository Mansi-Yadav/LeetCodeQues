class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string temp;
        for(int i=0; i<s.size(); i++){
            if(s.at(i) == ' '){
                if(temp.length() > 0){
                   st.push(temp);
                   temp="";  
                }
               
            }
            else{
                 temp+= s.at(i);
               
            }
                
        }
        string ans;
        ans.append(temp);
        while(!st.empty()){
            ans.append(" ");
            ans.append(st.top());
            st.pop();
        }
        if(ans.length() !=0 && ans[0] == ' '){
            ans= ans.substr(1, ans.length());
        }
        return ans;
    }
};