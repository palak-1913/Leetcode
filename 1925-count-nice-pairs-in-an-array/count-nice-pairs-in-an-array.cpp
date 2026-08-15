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

    long long fact(int n,int r){
        long long curr = 1;
            for(int j=0;j<r;j++){
                curr= curr*(n-j)/(j+1);
            }

        return curr;
    }
    int countNicePairs(vector<int>& nums) {
        for(int i=0;i<nums.size();i++) nums[i] = nums[i] - rev(nums[i]);
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++) m[nums[i]]++;//freq cal

        long long count=0;
        long long MOD = 1e9 + 7;
        for(auto p:m){
            count=(count+fact(p.second,2))%MOD;
        }
        return count;


    }
};