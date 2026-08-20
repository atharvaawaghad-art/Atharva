class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int ans = 0;
        for (int i = 0; i < k; i++) {
            ans += cardPoints[i];
        }
        int maxi = ans;
        int right = n - 1;
        for (int i = k - 1; i >= 0; i--) {
            ans -= cardPoints[i];
            ans += cardPoints[right];
            maxi = max(maxi, ans);
            right--;
        }
        return maxi;
    }
};