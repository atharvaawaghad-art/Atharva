class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int index = 0;
        while (i < n) {
            char ch = chars[i];
            int j = i;
            while (j < n && chars[j] == ch) {
                j++;
            }
            int count = j - i;
            chars[index++] = ch;
            if (count > 1) {
                string s = to_string(count);
                for (int k = 0; k < s.size(); k++) {
                     chars[index++] = s[k];
                }
            }
            i = j;
        }
        return index;
    }
};
