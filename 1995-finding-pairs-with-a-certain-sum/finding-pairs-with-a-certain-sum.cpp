class FindSumPairs {
public:
    vector<int>nums1;
    vector<int>nums2;
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        this->nums1 = nums1;
        this->nums2 = nums2;
        for(int i=0;i<nums1.size();i++){
            m1[nums1[i]]++;//freq calculation
        }

        for(int i=0;i<nums2.size();i++){
            m2[nums2[i]]++;//freq calculation
        }
    }
    
    void add(int index, int val) {
        int prev = nums2[index];//yeh kaam ek array m nhi array update hogi aur uss update value ko map m dalna pdega 
        m2[nums2[index]]--;
        nums2[index]+=val;
        m2[nums2[index]]++;
    }
    
    int count(int tot) {
        int Count=0;
        for(auto p:m2){
            int val = p.first;
            int freq = p.second;
            int diff = tot-val;
            if(m1.find(diff)!=m1.end()){
                Count+=freq*m1[diff];
            } 
        }
        return Count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */