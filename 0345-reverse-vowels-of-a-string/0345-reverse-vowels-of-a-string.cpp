class Solution {
public:
    bool solve(char c){
        return c == 'a' || c == 'e' || c == 'i' ||
               c == 'o' || c == 'u' || c == 'A' ||
               c == 'E' || c == 'I' || c == 'O' ||
               c == 'U';
    }
    string reverseVowels(string s) {
        int left=0;
        int right=s.size()-1;
        while (left<right){
            if (!solve(s[left])){
                left++;
            }
            else if (!solve(s[right])){
                right--;
            }
            else{
                swap(s[left],s[right]);
                left++;
                right--;
            }
        }
        return s;
    }
};