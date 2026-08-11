class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        //using unorderd set 
        int n = words.size();
        unordered_set<string>s;
        for(int i=0;i<n;i++){
            s.insert(words[i]);
        }

        int count=0;
        for(int i=0;i<n;i++){
            string rev = words[i];
            reverse(rev.begin(),rev.end());
            if(words[i]==rev) continue;//agr dono char same hai tb 
            if(s.find(rev)!=s.end()){//set m ele find krna
                count++;
                s.erase(words[i]);
            }
        }
        return count;
    }
};