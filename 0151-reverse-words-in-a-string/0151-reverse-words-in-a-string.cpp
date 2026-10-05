class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(),s.end());
        int n=s.size();
        int i=0,j=0;
        while (i<n){
            while (i<n && s[i]==' '){
                i++;
            }
                if (i==n){
                    break;
                }
                if (j>0){
                    s[j]=' ';
                    j++;
                }
                int start=j;
                while (i<n && s[i]!=' '){
                    s[j]=s[i];
                    i++;
                    j++;
                }
                reverse(s.begin() + start, s.begin() + j);
            }
            s.resize(j);
            return s;
    }
};