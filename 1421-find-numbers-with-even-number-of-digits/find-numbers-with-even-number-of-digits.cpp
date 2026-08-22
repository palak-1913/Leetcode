class Solution {
public:
    int count_digits(vector<int>&nums){
        int c=0;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            int count=0;
            while(num!=0){
                int rem = rem%10;
                if(rem%2==0) count++;
                num/=10;
            }
            nums[i] = count;
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) c++;
        }
        return c;
    }
    int findNumbers(vector<int>& nums) {
        return count_digits(nums);
    }
};