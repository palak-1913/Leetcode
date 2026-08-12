class Solution {
public:
    bool isAnagram(string s, string t) {
        // Method-3

        if(s.length()!=t.length()) return false;
        unordered_map<char,int>m1;

        for(int i=0;i<s.length();i++){//calculation of frequency of char at s
            m1[s[i]]++;
        }

        for(int i=0;i<t.length();i++){
            char ch = t[i];
            if(m1.find(ch)!=m1.end()){//ele find ho jata hai 
                m1[ch]--;//freq dec kro 
                if(m1[ch]==0) m1.erase(ch); //jaise hi freq 0 hui usse map se hata do
            }

            else return false;//ele find hi nhi hua
        }

        if(m1.size()) return false;
        else return true;

        
    }
};