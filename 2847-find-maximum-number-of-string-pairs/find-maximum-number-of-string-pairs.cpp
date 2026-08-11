class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count=0;
        for(int i=0;i<n;i++){
            string str = words[i];
            for(int j=i+1;j<n;j++){
                string rev = words[j];
                reverse(rev.begin(),rev.end());
                if(str==rev) count++;
            }
        }

        return count;
    }
};