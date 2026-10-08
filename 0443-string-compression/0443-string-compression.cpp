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
                for (char c : s) {
                    chars[index++] = c;
                }
            }
            i = j;
        }
        return index;
    }
};