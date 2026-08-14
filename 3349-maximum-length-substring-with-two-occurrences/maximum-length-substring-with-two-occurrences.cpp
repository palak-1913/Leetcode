class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0;
        int ans=0;
        while(i<s.length()){
            int count=0;
            int j=i;
            while(j<s.length()){
               int rep = 0;
               for(int k=i;k<j;k++){
                    if(s[k]==s[j]) rep++;
               }
               if(rep==2) break;
               count++;
               ans = max(ans,count);
               j++;
            }
            i++;
        }

        return ans;
    }
};