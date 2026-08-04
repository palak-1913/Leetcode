class Solution {
public:
    bool not_present(int val,vector<int>& nums){
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val)return false;//val prsent hai push back nhi krnege
        }
        return true;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int small = nums[0];
        int large = nums[n-1];

        int diff = large-small-1;
        int btw = n-2;

        if(diff==btw)return ans;//no missing number 

        else{//missing number
            for(int i=0;i<diff;i++){
                int val = small + i +1;
                if(not_present(val,nums)) ans.push_back(val);
            }
        }
        return ans;
        
    }
};