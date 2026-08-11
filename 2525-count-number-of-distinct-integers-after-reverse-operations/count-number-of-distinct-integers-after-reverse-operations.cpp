class Solution {
public:
    int reverse(int num,vector<int>&nums){
        int rev = 0;
        while(num!=0){
            int rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }
        return rev;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        for(int i=0;i<n;i++){
           int rev =  reverse(nums[i],nums);
           s.insert(rev);
           s.insert(nums[i]); 
        }
        return s.size();
    }
};