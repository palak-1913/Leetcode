class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size();
        int m = arr2.size();
        vector<int>ans;
        for(int i=0;i<m;i++){
            int num = arr2[i];
            for(int j=0;j<n;j++){
                if(arr1[j]==num) {
                    ans.push_back(arr1[j]);
                    arr1[j] = INT_MAX;//woh ele rakh diya hai toh usse hata do 
                }
            }
        }
        //place remaning
        sort(arr1.begin(),arr1.end());
        for(int i=0;i<n;i++){
            if(arr1[i]!=INT_MAX) ans.push_back(arr1[i]);
        }
        return ans;


    }
};