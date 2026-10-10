class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        if (s.size()==0){
            return true;
        }
        while (j<t.size()){
            if (i==s.size()-1 && s[i]==t[j]){
                return true;
            }
            if (s[i]==t[j]){
                i++;
            }
            j++;
        }
        return false;
    }
};