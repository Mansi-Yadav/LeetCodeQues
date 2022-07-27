class Solution {
public:
    string reverseWords(string s) {
        //stack<string> st;
        string temp;
        string ans;
        
        for(int i=0; i<s.size(); i++){
            if(s.at(i) == ' '){
                if(temp.length() > 0){
                   // st.push(temp);
                    if(ans.length() >0)
                        ans= temp+" "+ans;
                    else
                        ans= temp;
                }
               temp=""; 
            }
            else{
                 temp+= s.at(i);
               
            }
                
        }
        //string ans;
        // ans.append(temp);
        // while(!st.empty()){
        //     ans.append(" ");
        //     ans.append(st.top());
        //     st.pop();
        // }
        if(temp.length() > 0){
           if(ans.length() >0)
                        ans= temp+" "+ans;
                    else
                        ans= temp; 
        }
        if(ans.length() !=0 && ans[0] == ' '){
            ans= ans.substr(1, ans.length());
        }
        return ans;
    }
};