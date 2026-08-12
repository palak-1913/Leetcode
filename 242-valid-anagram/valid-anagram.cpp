class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(int i=0;i<s.length();i++){//calculation of frequency of char at s
            m1[s[i]]++;
        }

        for(int i=0;i<t.length();i++){//calculation of frequency of char at t
            m2[t[i]]++;
        }

        for(auto p:m1){
            char ch1 = p.first;
            int freq1 = p.second;

            if(m1.find(ch1)!=m1.end()){//ele found now check freq
                if(freq1!=m2[ch1]) return false;
            }

            else return false;//element not found
        }

        return true;
    }
};