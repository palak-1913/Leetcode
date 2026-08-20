class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }

        for(auto p:m){
            int freq = p.second;
            if(freq%2!=0) return false;
        }
        return true;
    }
};