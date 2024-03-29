class Solution {
public:
    int compareVersion(string a, string b) {
       int n= a.size();
    int m= b.size();
    
    int i=0, j=0;
    while(i<n || j<m){
        int n1=0;
        int n2=0;
        while(i<n && a[i] != '.'){
            n1= n1*10 + (a[i]- '0');
            i++;
        }
        while(j<m && b[j] != '.'){
            n2= n2*10 + (b[j]-'0');
            j++;
        }
        if(n1 > n2)
            return 1;
        else if(n1 < n2)
            return -1;
        i++;
        j++;   
    }
    return 0; 
    }
};