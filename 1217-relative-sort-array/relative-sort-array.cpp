class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        //make an map which will store the frequency of arr1
        unordered_map<int,int>mp;
        int n = arr1.size();
        int m = arr2.size();
        for(int i=0;i<n;i++){
            mp[arr1[i]]++;//freq clculation
        }

        vector<int>ans;
        for(int i=0;i<m;i++){
            int val = arr2[i];
            while(mp.find(val)!=mp.end() && mp[val]!=0){//ele mil gya aur freq 0 nhi hai toh usko ans m push kr do
                ans.push_back(val);
                mp[val]--;
            }
            mp.erase(val);
        }

        vector<int>rem;
        for(auto p:mp){
            int val = p.first;
            int freq = p.second;
            while(freq!=0) {
                rem.push_back(val);
                freq--;
            }
            
        }

        sort(rem.begin(),rem.end());

        for(int i=0;i<rem.size();i++) ans.push_back(rem[i]);

        return ans;
    }
};