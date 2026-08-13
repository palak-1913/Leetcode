class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) m[nums[i]]++;

        int count=0;
        for(auto p:m){
            int num = p.first;
            int diff = k-num;
            if(num==diff) count+=m[num]/2;
            else if(m.find(diff)!=m.end()){
                int freq = min(m[diff],m[num]);
                count+=freq;
                m[num]-=freq;
                m[diff]-=freq;

            }
        }

        return count;
    }
};