class Solution {
public:
    void reverse(int num,vector<int>&ans,int i){
        int rev = 0;
        while(num!=0){
            int rem = num%10;
            rev = rev*10 + rem;
            num = num/10;
        }
        ans[i] = rev;
        i++;   
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(2*n);
        for(int i=0;i<n;i++) ans[i] = nums[i];
        for(int i=0;i<n;i++){
            reverse(nums[i],ans,i+n); 
        }
        
        unordered_set<int>s;
        for(int i=0;i<2*n;i++){
            s.insert(ans[i]);
        }
        return s.size();
    }
};