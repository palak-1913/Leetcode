class Solution {
public:
    int rev(int num){
        int rev=0;
        while(num!=0){
            int rem = num%10;
            rev = rev*10+rem;
            num/=10;
        }
        return rev;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i] = nums[i] - rev(nums[i]);
        unordered_map<int,int>m;

        int count=0;
        for(int i=0;i<nums.size();i++){
            count = count%1000000007;
            if(m.find(nums[i])!=m.end()){
                count+=m[nums[i]];
                m[nums[i]]++;
            }
            else m[nums[i]]++;
            
        }
        return count%1000000007;


    }
};