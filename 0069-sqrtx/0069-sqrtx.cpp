class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;
        for (int i = 1; i <= x / 2; i++) {
            if ((long long)i * i > x) {
                return i - 1;
            }
        }
        return x / 2;
    }
};