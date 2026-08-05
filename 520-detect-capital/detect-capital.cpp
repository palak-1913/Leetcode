class Solution {
public:
    bool detectCapitalUse(string word) {
        int upper_len =0;
        for(int i=0;i<word.size();i++){
            if(word[i] >=65 && word[i]<=90) upper_len++;
        }

        if(upper_len==word.length() || upper_len==0 || (upper_len==1 && (word[0] >=65 && word[0]<=90))) return true;
        else return false;
    }
};