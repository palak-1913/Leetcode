class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            nums[i]+=nums[i-1];
        }
        
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){
            if(nums[i]==k) count++;
            int diff = nums[i]-k;
            if(m.find(diff)!=m.end()) count+=m[diff];
            m[nums[i]]++;
        }
        return count;
    }
};