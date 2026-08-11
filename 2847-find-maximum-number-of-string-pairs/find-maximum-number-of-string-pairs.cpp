class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        //using unorderd set 
        int n = words.size();
        unordered_set<string>s;
        int count=0;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(s.find(rev)!=s.end()){//set m ele find krna
                count++;
            }
            else s.insert(words[i]);
        }
        return count;
    }
};