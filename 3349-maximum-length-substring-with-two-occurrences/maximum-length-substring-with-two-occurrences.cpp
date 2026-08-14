class Solution {
public:
    int maximumLengthSubstring(string s) {
        int i=0;
        int ans = 0;
        while(i<s.length()){
            int j=i;
            int count=0;
            unordered_map<char,int>m;
            while(j<s.length()){
                if(m.find(s[j])!=m.end()){
                    m[s[j]]++;
                    if(m[s[j]]==3) break;
                }
                else{
                    m[s[j]]=1;
                }
                count++;
                ans = max(ans,count);
                j++;
            }
            i++;
        }
        return ans;
    }
};