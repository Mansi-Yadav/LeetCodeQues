// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
        struct meeting{
            int start;
            int end; 
            int pos;
        };
    
    static bool comp(struct meeting m1, struct meeting m2){
        if(m1.end < m2.end)
            return true;
        else if(m1.end > m2.end)
            return false;
        else if(m1.pos > m2.pos)
            return true;
        return false;
    }
    
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int s[], int e[], int n)
    {
        struct meeting m[n];
        
        for(int i=0; i<n; i++){
            m[i].start=s[i];
            m[i].end= e[i];
            m[i].pos= i+1;
        }
        
        sort(m, m+n, comp);
        
         vector<int> ans;
         
         ans.push_back(m[0].pos);
         int cnt=1;
         int endLimit= m[0].end;
         
         for(int i=1; i<n; i++){
             if(m[i].start > endLimit){
                 endLimit= m[i].end;
                 ans.push_back(m[i].pos);
                 cnt++;
             }
         }
        return cnt;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends