class Solution {
public:
    void helper(vector<int>& candidates,vector<int> ans, vector<vector<int>>&res,int target, int idx){
        if(target==0){
            res.push_back(ans);
            return;
        }
        if(target<0) return;
        for(int i=idx;i<candidates.size();i++){
            ans.push_back(candidates[i]);
            helper(candidates,ans,res,target-candidates[i],i);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>res;
        helper(candidates,ans,res,target,0);
        return res;
    }
};