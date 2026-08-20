class Solution {
public:
    void helper(vector<int>&nums,vector<int>res,vector<vector<int>>&ans,int i){
        if(i==nums.size()){
            ans.push_back(res);
            return;
        }
        helper(nums,res,ans,i+1);
        res.push_back(nums[i]);
        helper(nums,res,ans,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>res;
        helper(nums,res,ans,0);
        return ans;
    }
};