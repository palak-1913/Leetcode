class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++){//calculate freq
            m[arr[i]]++;
        }

        //ab ele ki freq set mai dalo;
        unordered_set<int>s;
        for(auto p:m){
            int val = p.second;
            if(s.find(val)!=s.end()) return false; //ele present
            else s.insert(val);
        }
        return true;
    }
};