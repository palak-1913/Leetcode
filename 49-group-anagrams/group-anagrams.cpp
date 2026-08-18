class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>>m;

        for(int i=0;i<n;i++){
            string lexo = strs[i];
            sort(lexo.begin(),lexo.end());
            m[lexo].push_back(strs[i]);   
        }

        vector<vector<string>>ans;
        for(auto p:m){
            ans.push_back(p.second);
        } 

        return ans;
    }
};