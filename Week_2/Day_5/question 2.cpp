class Solution {
public:
    int compress(vector<char>& chars) {
        string ans = "";
        int n = chars.size();
        int idx=0;
        
        int i = 0;
        
        while (i < n) {
            char curr=chars[i];
            int c=0;

            while (i<n && chars[i] == curr) {
                c++;
                i++;
            } 
            chars[idx]=curr;
            idx++;

            if(c>1){
                
                string count=to_string(c);
                for(char c:count){
                    chars[idx]=c;
                    idx++;
                }
            
            
            }
            
        }

        return idx;
    }
};