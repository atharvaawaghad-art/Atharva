class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int rows = matrix.size();
        int cols = matrix[0].size();

        for (int i = 0; i < rows; i++) {
            int rowMin = *min_element(matrix[i].begin(), matrix[i].end());

            int col = min_element(matrix[i].begin(), matrix[i].end()) - matrix[i].begin();

            bool isLucky = true;

            for (int j = 0; j < rows; j++) {
                if (matrix[j][col] > rowMin) {
                    isLucky = false;
                    break;
                }
            }

            if (isLucky) {
                ans.push_back(rowMin);
            }
        }

        return ans;
    }
};
