class Solution {
public:
    bool isAnagram(string s, string t) {
        // usinh hash map
        if(s.length()!=t.length()) return false;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        for(int i=0;i<s.length();i++){
            m1[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            m2[t[i]]++;
        }

        for(auto p:m1){
            char ch1 = p.first;
            int freq1 = p.second;
            if(m2.find(ch1)!=m2.end()){//ele find hogya
                int freq2 = m2[ch1];//check the frequency
                if(freq1!=freq2) return false;

            }
            else return false;
        }

        return true;


    }
};