class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for (int i=0;i<s.size();i++){
            int pos=s[i]-'a'+1;
            int reverse=27-pos;
            ans+=reverse*(i+1);
        }
        return ans;
    }
};